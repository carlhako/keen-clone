/* Object engine, Keen and the level loop (KEEN1.EXE 0x0239..0x5074). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "game.h"
#include "gfx.h"
#include "kdata.h"
#include "platform.h"

gamestate_t gs;
ctrl_t ctrl, ctrl_prev;
int tics;
static uint32_t lasttick;
obj_t objs[MAXOBJS], cur;
int numobjs;
spec_t specs[MAXSPECS];
int numspecs;
int cur_level;
int scroll_tx, scroll_ty;
int32_t scrollmin_x, scrollmin_y, scrollmax_x, scrollmax_y;
int32_t objmax_x, objmax_y, keenmax_x, keendeath_y;
int keen_facing, lights_on = 1, keen_invuln, on_switch, switch_x, switch_y;
int level_result, godmode, abort_game, warp_level;
int32_t last_extra;
int in_world_map;

/* Control bindings from CTLPANEL.CK1: 8 direction keys, 2 buttons. */
uint8_t key_dir[8] = {0x48, 0x49, 0x4d, 0x51, 0x50, 0x4f, 0x4b, 0x47};
uint8_t key_b1 = 0x1d, key_b2 = 0x38;

/* ------------------------------------------------------------------ */
/* Random numbers: a 256 byte table (DS:4F86) and an additive generator
 * seeded from DS:50AE. Both are seeded from the clock like the original. */

static int rnd_index;
static uint16_t rng_state[18];
static int rng_a = 0x22, rng_b = 0x0a;
static uint16_t rng_sum;

int rand8(void)
{
    rnd_index = (rnd_index + 1) & 0xff;
    return ds_b(0x4f86 + rnd_index);
}

int rand_range(int max)
{
    uint16_t mask = 0xffff, p = (uint16_t)max;
    for (;;) {
        int top = (p & 0x8000) != 0;
        p <<= 1;
        if (top)
            break;
        mask >>= 1;
    }
    uint16_t v = rng_state[rng_a / 2] + rng_state[rng_b / 2] + 1;
    rng_state[rng_a / 2] = v;
    rng_sum += v;
    rng_a -= 2;
    if (rng_a == 0)
        rng_a = 0x22;
    rng_b -= 2;
    if (rng_b == 0)
        rng_b = 0x22;
    uint16_t r = rng_sum & mask;
    if ((uint16_t)max < r)
        r >>= 1;
    return r;
}

void rng_init(void)
{
    time_t t = time(NULL);
    for (int i = 0; i < 17; i++)
        rng_state[i + 1] = (uint16_t)ds_w(0x50ae + i * 2);
    rng_sum = 0;
    rng_a = 0x22;
    rng_b = 0x0a;
    rng_state[5] = (uint16_t)t;
    rng_state[17] = (uint16_t)(t >> 3);
    rand_range(0xffff);
    rnd_index = (int)(t % 100);
}

/* ------------------------------------------------------------------ */
/* Frame pacing (0x0239) and refresh (0x0289). */

void frame_start(void)
{
    rf_begin();
    for (;;) {
        uint32_t now = plat_ticks();
        uint32_t d = now - lasttick;
        if (d >= 6) {
            tics = d > 15 ? 15 : (int)d;
            lasttick = now;
            break;
        }
        plat_pump();
        plat_delay(1);
    }
}

void frame_refresh(void)
{
    rf_refresh();
}

/* Reset frame timing after a pause (menus, windows). */
void reset_frame_time(void)
{
    lasttick = plat_ticks();
}

void read_ctrl(ctrl_t *c)
{
    plat_pump();
    int y = 0, x = 0;
    if (keydown[key_dir[0]]) y = -1;
    if (keydown[key_dir[2]]) x = 1;
    if (keydown[key_dir[4]]) y = 1;
    if (keydown[key_dir[6]]) x = -1;
    if (keydown[key_dir[1]]) { y = -1; x = 1; }
    if (keydown[key_dir[7]]) { y = -1; x = -1; }
    if (keydown[key_dir[3]]) { y = 1; x = 1; }
    if (keydown[key_dir[5]]) { y = 1; x = -1; }
    static const int dirs[9] = {7, 0, 1, 6, 8, 2, 5, 4, 3};
    c->dir = dirs[y * 3 + x + 4];
    c->b1 = keydown[key_b1] != 0;
    c->b2 = keydown[key_b2] != 0;
}

/* ------------------------------------------------------------------ */
/* Map access */

int tile_at(int tx, int ty)
{
    if (tx < 0) tx = 0;
    if (ty < 0) ty = 0;
    if (tx >= map_w) tx = map_w - 1;
    if (ty >= map_h) ty = map_h - 1;
    return MAPT(tx, ty);
}

void set_tile(int tx, int ty, int t)
{
    if (tx >= 0 && ty >= 0 && tx < map_w && ty < map_h)
        MAPT(tx, ty) = (uint16_t)t;
}

static int info_at(int tx, int ty)
{
    if (tx < 0 || ty < 0 || tx >= map_w || ty >= map_h)
        return 0;
    return MAPI(tx, ty);
}

/* 0x066B: load LEVELnn and compute the scroll / object limits. */
void load_level(int num)
{
    cur_level = num;
    if (!load_level_file(num)) {
        fprintf(stderr, "Missing LEVEL%02d.CK1\n", num);
        exit(1);
    }
    scrollmin_x = 0x2000;
    scrollmin_y = 0x2000;
    scrollmax_x = (int32_t)(map_w - 22) << 12;
    objmax_x = (int32_t)(map_w - 2) << 12;
    objmax_y = (int32_t)map_h << 12;
    scrollmax_y = ((int32_t)(map_h - 15) << 12) + 0x800;
    keenmax_x = (int32_t)(map_w - 3) << 12;
    keendeath_y = (int32_t)map_h << 12;
}

/* ------------------------------------------------------------------ */
/* Objects */

void think_none(void) {}
void touch_none(obj_t *self, obj_t *other) { (void)self; (void)other; }
void spec_none(spec_t *s) { (void)s; }

obj_t *new_obj(void)
{
    int i = 1;
    while (i < numobjs && objs[i].type)
        i++;
    if (i >= MAXOBJS)
        i = MAXOBJS - 1;
    if (i >= numobjs)
        numobjs = i + 1;
    obj_t *o = &objs[i];
    memset(o, 0, sizeof *o);
    o->think = think_none;
    o->touch = touch_none;
    o->active = 1;
    return o;
}

spec_t *new_spec(void)
{
    int i = 0;
    while (i < numspecs && specs[i].active)
        i++;
    if (i >= MAXSPECS)
        i = MAXSPECS - 1;
    if (i >= numspecs)
        numspecs = i + 1;
    spec_t *s = &specs[i];
    memset(s, 0, sizeof *s);
    s->think = spec_none;
    return s;
}

static int touching(const obj_t *a, const obj_t *b)
{
    if (a->x1 == 0 || b->x1 == 0)
        return 0;
    return b->x1 <= a->x2 && b->y1 <= a->y2 && a->x1 <= b->x2 && a->y1 <= b->y2;
}

void calc_hitbox_obj(obj_t *o)
{
    const sprite_t *s = &sprites[o->sprite >= 0 && o->sprite < NUMSPRITES ? o->sprite : 0];
    o->x1 = o->x + s->hb[0];
    o->x2 = o->x + s->hb[2];
    o->y1 = o->y + s->hb[1];
    o->y2 = o->y + s->hb[3];
}

void calc_hitbox(void)
{
    calc_hitbox_obj(&cur);
}

/* 0x2C05 */
void accel_x(int a)
{
    for (int i = 1; i <= tics; i++) {
        cur.xv += a;
        if (cur.xv > 120)
            cur.xv = 120;
        else if (cur.xv < -120)
            cur.xv = -120;
        if (i != tics)
            cur.dx += cur.xv;
    }
}

/* 0x2C4A */
static void accel_y_limit(int max, int a)
{
    for (int i = 1; i <= tics; i++) {
        cur.yv += a;
        if (cur.yv > max)
            cur.yv = max;
        else if (cur.yv < -max)
            cur.yv = -max;
        if (i != tics)
            cur.dy += cur.yv;
    }
}

/* 0x2C95 */
void gravity(void)
{
    for (int i = 1; i <= tics; i++) {
        cur.yv += 3;
        if (cur.yv > 200)
            cur.yv = 200;
        else if (cur.yv < -400)
            cur.yv = -400;
        if (i != tics)
            cur.dy += cur.yv;
    }
}

/* 0x2D02: move the hitbox by dx/dy against the tile edges.
 * Returns 1 = blocked left, 2 = landed, 4 = blocked right, 8 = hit head. */
int clip_move(void)
{
    int flags = 0;
    if (cur.dx > 0xf00) cur.dx = 0xf00;
    else if (cur.dx < -0xf00) cur.dx = -0xf00;
    if (cur.dy > 0xf00) cur.dy = 0xf00;
    else if (cur.dy < -0xf00) cur.dy = -0xf00;

    cur.y2 += cur.dy;
    cur.y1 += cur.dy;
    int tx1 = cur.x1 >> 12, tx2 = cur.x2 >> 12;
    if (cur.dy > 0) {
        int ty = cur.y2 >> 12;
        if (ty != (cur.y2 - cur.dy) >> 12)
            for (int tx = tx1; tx <= tx2; tx++)
                if (T_TOP(tile_at(tx, ty))) {
                    cur.yv = 0;
                    int m = (int)((cur.y2 + 1) % 0x1000);
                    cur.dy -= m;
                    cur.y1 -= m;
                    cur.y2 -= m;
                    flags = 2;
                    break;
                }
    } else if (cur.dy < 0) {
        int ty = cur.y1 >> 12;
        if (ty != (cur.y1 - cur.dy) >> 12)
            for (int tx = tx1; tx <= tx2; tx++)
                if (T_BOTTOM(tile_at(tx, ty))) {
                    cur.yv = 0;
                    int m = 0x1000 - (int)(cur.y1 % 0x1000);
                    cur.dy += m;
                    cur.y1 += m;
                    cur.y2 += m;
                    flags = 8;
                    break;
                }
    }

    cur.x1 += cur.dx;
    cur.x2 += cur.dx;
    int ty1 = cur.y1 >> 12, ty2 = cur.y2 >> 12;
    if (cur.dx > 0) {
        int tx = cur.x2 >> 12;
        if (tx != (cur.x2 - cur.dx) >> 12)
            for (int ty = ty1; ty <= ty2; ty++)
                if (T_LEFT(tile_at(tx, ty))) {
                    cur.xv = 0;
                    int m = (int)((cur.x2 + 1) % 0x1000);
                    cur.dx -= m;
                    cur.x1 -= m;
                    cur.x2 -= m;
                    return flags | 4;
                }
    } else if (cur.dx < 0) {
        int tx = cur.x1 >> 12;
        if (tx != (cur.x1 - cur.dx) >> 12)
            for (int ty = ty1; ty <= ty2; ty++)
                if (T_RIGHT(tile_at(tx, ty))) {
                    cur.xv = 0;
                    int m = 0x1000 - (int)(cur.x1 % 0x1000);
                    cur.dx += m;
                    cur.x1 += m;
                    cur.x2 += m;
                    return flags | 1;
                }
    }
    return flags;
}

/* 0x2CD8 */
int move_obj(void)
{
    cur.dx += cur.xv * tics;
    cur.dy += cur.yv * tics;
    return clip_move();
}

/* 0x3301: limits for objects other than Keen; returns 1 to skip thinking. */
static int obj_offscreen(void)
{
    if (game_version == 131) {
        /* v1.31 removes objects that leave the level instead of clamping. */
        if (cur.y < 0)
            cur.y = 0;
        if (cur.x > objmax_x || cur.x < 0 || cur.y > objmax_y) {
            cur.type = 0;
            return 1;
        }
    } else {
        if (cur.x > objmax_x)
            cur.x = objmax_x;
        else if (cur.x < 0)
            cur.x = 0;
        if (cur.y < 0)
            cur.y = 0;
        else if (cur.y > objmax_y) {
            cur.type = 0;
            return 1;
        }
    }
    int tx = cur.x >> 12, ty = cur.y >> 12;
    if (tx < scroll_tx - 8 || ty < scroll_ty - 8 || tx > scroll_tx + 0x1c || ty > scroll_ty + 0x12) {
        if (cur.type < 9)
            cur.active = 0;
        else
            cur.type = 0;
        return 1;
    }
    return 0;
}

/* ------------------------------------------------------------------ */
/* Score, death */

void add_score(int pts)
{
    gs.score += pts;
    if (gs.score - last_extra >= 20000) {
        snd_play(0x1c);
        last_extra = gs.score / 20000 * 20000;
        gs.lives++;
    }
}

/* 0x42E9: works on the stored Keen object (called outside his think). */
void kill_keen(void)
{
    if (godmode || keen_invuln)
        return;
    extern void keen_dying(void);
    objs[0].think = keen_dying;
    objs[0].touch = touch_none;
    objs[0].y += 0x800;
    objs[0].yv = 0;
    objs[0].xv = 0;
    objs[0].timer = 0;
    objs[0].sprite = 0x16;
    snd_play(8);
}

/* 0x4335: Keen fell out of the level (inside his think). */
static void keen_fell(void)
{
    extern void keen_dying(void);
    cur.think = keen_dying;
    cur.touch = touch_none;
    cur.y += 0x800;
    cur.xv = 0;
    objs[0].yv = 0;
    objs[0].xv = 0;
    cur.timer = 0;
    cur.sprite = 0x16;
    snd_play(8);
}

/* 0x33EE: keep Keen inside the level, kill him below it. */
static void keen_bounds(void)
{
    int32_t minx = scrollmin_x + 8;
    if (cur.x < minx) {
        cur.xv = 0;
        cur.dx = 0;
        cur.x = minx;
    } else if (cur.x > keenmax_x) {
        cur.xv = 0;
        cur.dx = 0;
        cur.x = keenmax_x;
    }
    if (cur.y < scrollmin_y) {
        cur.dy = 0;
        cur.yv = 0;
        cur.y = scrollmin_y;
    } else if (cur.y > keendeath_y) {
        snd_play(0x1b);
        snd_wait();
        keen_fell();
    }
}

/* 0x34A1: scroll to follow Keen. */
extern void keen_exit_walk(void);
extern void keen_dying(void);

static void scroll_follow(void)
{
    if (objs[0].think == keen_exit_walk || objs[0].think == keen_dying)
        return;
    int32_t kx = objs[0].x - scroll_x, ky = objs[0].y - scroll_y;
    if (objs[0].dx > 0 && kx > 0xb000) {
        scroll_x += objs[0].dx;
        if (scroll_x > scrollmax_x)
            scroll_x = scrollmax_x;
    } else if (objs[0].dx < 0 && kx < 0x9000) {
        scroll_x += objs[0].dx;
        if (scroll_x < scrollmin_x)
            scroll_x = scrollmin_x;
    }
    if (objs[0].dy > 0 && ky > 0x7000) {
        scroll_y += objs[0].dy;
        if (scroll_y > scrollmax_y)
            scroll_y = scrollmax_y;
        return;
    }
    if (objs[0].dy < 0 && ky < 0x3000) {
        scroll_y += objs[0].dy;
        if (scroll_y < scrollmin_y)
            scroll_y = scrollmin_y;
    }
}

/* ------------------------------------------------------------------ */
/* Keen */

void keen_jump_charge(void);
void keen_air(void);
void keen_shoot(void);
void keen_pogo_air(void);
void keen_pogo_charge(void);
void keen_frozen(void);
static void switch_activate(void);
static void spawn_keenshot(int32_t x, int32_t y);

static void start_jump(void)
{
    cur.w2e = cur.xv;
    cur.xv = 0;
    cur.w2c = 0;
    cur.timer = 0;
    cur.w26 = keen_facing >= 0 ? 8 : 0xe;
    cur.think = keen_jump_charge;
}

static void start_shoot(void)
{
    cur.think = keen_shoot;
    cur.dx = 0;
    cur.w2c = 0;
    cur.timer = 0;
    cur.sprite = keen_facing > 0 ? 0x14 : 0x15;
}

/* 0x38F0: standing / walking */
void keen_walk(void)
{
    int slip = 1;
    if (cur.w30 == 0) {
        int tx1 = cur.x1 >> 12, tx2 = cur.x2 >> 12, ty = (cur.y2 >> 12) + 1;
        for (int tx = tx1; tx <= tx2; tx++) {
            int v = T_TOP(tile_at(tx, ty));
            if (v > 1)
                slip = v;
        }
    }
    if (ctrl.b1)
        start_jump();
    if (slip < 3) {
        if (ctrl.dir >= 1 && ctrl.dir <= 3) {
            accel_x(2);
            if (cur.xv < 0)
                ctrl.dir = 8;
        } else if (ctrl.dir >= 5 && ctrl.dir <= 7) {
            accel_x(-2);
            if (cur.xv > 0)
                ctrl.dir = 8;
        }
    }
    if (slip == 1 && ctrl.dir == 8) {
        if (cur.xv > 0) {
            accel_x(-3);
            if (cur.xv < 0)
                cur.xv = 0;
        } else if (cur.xv < 0) {
            accel_x(3);
            if (cur.xv > 0)
                cur.xv = 0;
        }
    }
    if (slip == 3) {
        if (keen_facing > 0)
            cur.xv = 0xb4;
        else if (keen_facing < 0)
            cur.xv = -0xb4;
    }
    uint32_t tick = plat_ticks();
    if (cur.xv == 0) {
        cur.sprite = keen_facing >= 0 ? 0 : 4;
    } else {
        cur.sprite = cur.xv > 0 ? 0 : 4;
        if (slip < 3)
            cur.sprite += (tick >> 4) & 3;
        keen_facing = cur.xv;
    }
    if (cur.xv != 0 && ((tick >> 4) & 1) && slip < 3)
        snd_play(((tick >> 5) & 1) ? 0x1e : 4);
    gravity();
    int f = move_obj();
    keen_bounds();
    if ((f & 5) && ((tick >> 4) & 1))
        snd_play(5);
    if (!(f & 2) && cur.w30 == 0) {
        cur.think = keen_air;
        snd_play(0x1b);
        return;
    }
    if (ctrl.b1)
        start_jump();
    if (ctrl.b2 && !ctrl_prev.b2) {
        if (on_switch) {
            switch_activate();
        } else {
            cur.timer = 0;
            cur.w2c = cur.xv;
            cur.xv = 0;
            if (gs.pogo)
                cur.think = keen_pogo_charge;
        }
    }
    if (ctrl.b1 && ctrl.b2 && !ctrl_prev.b1 && !ctrl_prev.b2)
        start_shoot();
    if (cur.w30)
        cur.w30--;
}

/* 0x3C14: crouching before a jump */
void keen_jump_charge(void)
{
    cur.sprite = cur.w26 + cur.timer / 6;
    if (ctrl.b1)
        cur.w2c += tics * 6;
    else if (cur.timer < 12)
        cur.timer = 24 - cur.timer;
    if (ctrl.dir >= 1 && ctrl.dir <= 3) {
        cur.w2e += tics * 2;
        if (cur.w2e > 120)
            cur.w2e = 120;
    } else if (ctrl.dir >= 5 && ctrl.dir <= 7) {
        cur.w2e -= tics * 2;
        if (cur.w2e < -120)
            cur.w2e = -120;
    }
    cur.xv = 0;
    cur.timer += tics;
    if (cur.timer >= 0x24) {
        cur.think = keen_air;
        cur.yv -= cur.w2c;
        cur.xv = cur.w2e;
        snd_play(6);
    }
    gravity();
    move_obj();
    keen_bounds();
    if (ctrl.b1 && ctrl.b2)
        start_shoot();
}

/* 0x3D22: in the air */
void keen_air(void)
{
    if (ctrl.dir >= 1 && ctrl.dir <= 3) {
        accel_x(2);
        if (cur.xv < 0)
            ctrl.dir = 8;
    } else if (ctrl.dir >= 5 && ctrl.dir <= 7) {
        accel_x(-2);
        if (cur.xv > 0)
            ctrl.dir = 8;
    }
    if (ctrl.dir == 8) {
        if (cur.xv > 0) {
            accel_x(-1);
            if (cur.xv < 0)
                cur.xv = 0;
        } else if (cur.xv < 0) {
            accel_x(1);
            if (cur.xv > 0)
                cur.xv = 0;
        }
    }
    cur.sprite = keen_facing > 0 ? 0xd : 0x13;
    if (cur.xv != 0)
        keen_facing = cur.xv;
    gravity();
    int f = move_obj();
    uint32_t tick = plat_ticks();
    if ((f & 5) && ((tick >> 4) & 1))
        snd_play(5);
    if (f & 2) {
        cur.think = keen_walk;
        snd_play(7);
        return;
    }
    if (f & 8)
        snd_play(0x15);
    keen_bounds();
    if (ctrl.b2 && !ctrl_prev.b2) {
        if (on_switch)
            switch_activate();
        else if (gs.pogo)
            cur.think = keen_pogo_air;
    }
    if (ctrl.b1 && ctrl.b2 && !ctrl_prev.b1 && !ctrl_prev.b2)
        start_shoot();
}

/* 0x3E9B: firing the raygun */
void keen_shoot(void)
{
    cur.timer += tics;
    if (cur.w2c == 0 && cur.timer > 1) {
        if (gs.ammo) {
            snd_play(0xc);
            gs.ammo--;
            spawn_keenshot(cur.x, cur.y);
        } else {
            snd_play(0x24);
        }
        cur.w2c = 1;
    }
    if (cur.timer > 0x1e && !ctrl.b1 && !ctrl.b2)
        cur.think = keen_walk;
    if (cur.xv > 0) {
        accel_x(-1);
        if (cur.xv < 0)
            cur.xv = 0;
    } else if (cur.xv < 0) {
        accel_x(1);
        if (cur.xv > 0)
            cur.xv = 0;
    }
    gravity();
    move_obj();
    keen_bounds();
}

/* 0x3F51: bouncing on the pogo stick */
void keen_pogo_air(void)
{
    read_ctrl(&ctrl);
    if (ctrl.dir >= 1 && ctrl.dir <= 3) {
        accel_x(1);
        if (cur.xv < 0)
            ctrl.dir = 8;
    } else if (ctrl.dir >= 5 && ctrl.dir <= 7) {
        accel_x(-1);
        if (cur.xv > 0)
            ctrl.dir = 8;
    }
    if (ctrl.b1 && cur.yv < 0)
        accel_y_limit(200, -1);
    if (godmode && ctrl.b1)
        cur.yv = -200;
    if (cur.xv != 0)
        keen_facing = cur.xv;
    cur.w26 = keen_facing >= 0 ? 0x18 : 0x1a;
    cur.sprite = cur.w26;
    gravity();
    int f = move_obj();
    uint32_t tick = plat_ticks();
    if ((f & 5) && ((tick >> 4) & 1))
        snd_play(5);
    if (f & 2) {
        cur.think = keen_pogo_charge;
        cur.timer = 0;
        cur.w2c = cur.xv;
        cur.xv = 0;
    }
    if (f & 8)
        snd_play(0x15);
    keen_bounds();
    if (ctrl.b2 && !ctrl_prev.b2) {
        if (on_switch)
            switch_activate();
        else
            cur.think = keen_air;
    }
    if (ctrl.b1 && ctrl.b2)
        start_shoot();
    if (cur.w30)
        cur.w30--;
}

/* 0x40DD: compressing the pogo stick on the ground */
void keen_pogo_charge(void)
{
    cur.xv = 0;
    cur.dx = 0;
    cur.sprite = cur.w26 + 1;
    cur.timer += tics;
    if (cur.timer > 0x16) {
        cur.think = keen_pogo_air;
        cur.w30 = 0;
        cur.yv -= 200;
        cur.xv = cur.w2c;
        snd_play(6);
    }
    if (ctrl.b2 && !ctrl_prev.b2)
        cur.think = keen_walk;
    if (ctrl.b1 && ctrl.b2)
        start_shoot();
    move_obj();
    cur.w30 = 0;
}

/* 0x2769: frozen by an ice block */
void keen_frozen(void)
{
    cur.sprite = 0x1c + ((plat_ticks() >> 5) & 1);
    cur.timer -= tics;
    if (cur.timer < 0) {
        cur.sprite = 0x1f;
        if (cur.timer < -50)
            cur.think = keen_walk;
    }
    gravity();
    move_obj();
    keen_bounds();
}

/* 0x4178: walking into the exit door. timer/w2c hold the door tile. */
void keen_exit_walk(void)
{
    int32_t tx = cur.timer, ty = cur.w2c;
    cur.dx = tics * 0x3c;
    cur.sprite = (plat_ticks() >> 4) & 3;
    keen_facing = cur.xv;
    rf_tile(tx << 12, ty << 12, 0xa0);
    rf_tile(tx << 12, (ty + 1) << 12, 0xa0);
    rf_tile((tx + 1) << 12, ty << 12, 0x8f);
    rf_tile((tx + 1) << 12, (ty + 1) << 12, 0x8f);
    if ((tx << 12) <= cur.x) {
        cur.type = 0;
        level_result = 1;
    }
}

/* 0x4281: dying animation */
void keen_dying(void)
{
    cur.timer += tics;
    if (cur.timer > 199) {
        cur.timer = -999;
        cur.xv = rand8() - 0x80;
        cur.yv = -400;
    }
    cur.sprite = 0x16 + ((plat_ticks() >> 4) & 1);
    cur.dx = cur.xv * tics;
    cur.dy = cur.yv * tics;
    if (cur.y2 < scroll_y)
        cur.type = 0;
}

/* 0x468D: Keen touching another object */
void keen_touch(obj_t *self, obj_t *o)
{
    switch (o->type) {
    case OT_YORP:
        if (o->think == yorp_stunned)
            return;
        if (self->yv > 0 && self->y + 0x800 <= o->y) {
            o->think = yorp_stunned;
            o->timer = 0;
            self->yv = 0;
            self->think = keen_walk;
            snd_play(0x1f);
            return;
        }
        self->yv = 0;
        self->xv = o->xv < 1 ? -0xf0 : 0xf0;
        snd_play(0x1d);
        return;
    case OT_GARG:
    case OT_VORT:
    case OT_ENEMYSHOT:
        if (o->type == OT_ENEMYSHOT && self->think == keen_frozen) {
            self->timer = 0;
            return;
        }
        kill_keen();
        return;
    case OT_BUTLER:
    case OT_TANK:
        self->yv = 0;
        self->xv = o->xv < 1 ? -0xf0 : 0xf0;
        snd_play(0x1d);
        return;
    case OT_ICEBLOCK:
        self->think = keen_frozen;
        self->xv = o->xv;
        self->yv = o->yv;
        self->timer = 800;
        snd_play(0x28);
        return;
    }
}

/* ------------------------------------------------------------------ */
/* Shots: 0x4783 Keen's raygun, 0x48B1..0x4912 shared shot logic */

void think_splash(void)
{
    cur.type = OT_DEAD;
    cur.timer += tics;
    if (cur.timer > 0x14)
        cur.type = 0;
}

static void shot_splash_obj(obj_t *o)
{
    snd_play(0x25);
    o->think = think_splash;
    o->touch = touch_none;
    o->timer = 0;
    o->sprite = rand8() > 0x80 ? 0x6e : 0x6f;
}

void think_shot(void)
{
    if (move_obj()) {
        snd_play(0x25);
        cur.type = OT_SPLASH;
        cur.think = think_splash;
        cur.timer = 0;
        cur.sprite = rand8() > 0x80 ? 0x6e : 0x6f;
    }
}

static void keenshot_touch(obj_t *self, obj_t *o)
{
    if (o->type != OT_KEEN && o->type != OT_DEAD)
        shot_splash_obj(self);
}

static void spawn_keenshot(int32_t x, int32_t y)
{
    obj_t *o = new_obj();
    o->type = OT_KEENSHOT;
    o->x = x;
    o->y = y + 0x900;
    o->think = think_shot;
    o->yv = 0;
    o->touch = keenshot_touch;
    o->sprite = 0x6c;
    int row = (int)(y >> 12) + 1;
    if (keen_facing >= 0) {
        o->xv = 0x190;
        if (!T_RIGHT(tile_at((int)(x >> 12) + 1, row)))
            return;
    } else {
        o->xv = -0x190;
        if (!T_LEFT(tile_at((int)(x >> 12), row)))
            return;
    }
    snd_play(0x25);
    o->type = OT_SPLASH;
    o->think = think_splash;
    o->timer = 0;
    o->sprite = rand8() > 0x80 ? 0x6e : 0x6f;
}

/* 0x4957 / 0x4966: shot enemies */
void think_dead(void)
{
    cur.timer++;
    gravity();
    move_obj();
}

void think_dying(void)
{
    cur.type = OT_DEAD;
    cur.timer += tics;
    if (cur.timer > 0x28) {
        cur.timer -= 0x28;
        cur.sprite++;
        cur.w2c--;
        if (cur.w2c == 1)
            cur.think = think_dead;
    }
    cur.xv = 0;
    gravity();
    move_obj();
}

/* ------------------------------------------------------------------ */
/* Switches and bridges (0x365B), lights (0x361B/0x363B) */

static const uint8_t *pal_full(void);
static const uint8_t *pal_dark(void);

static void lights(int on)
{
    lights_on = on;
    wait_vbl(1);
    plat_set_palette(on ? pal_full() : pal_dark());
}

static void switch_activate(void)
{
    snd_play(0x19);
    if (tile_at(switch_x + 3, switch_y + 5) == 0x1df) {
        /* The switch in the castle shakes the screen and ends the level. */
        int32_t sx = scroll_x, sy = scroll_y;
        for (int i = 1; i < 0x50; i++) {
            frame_start();
            scroll_x = sx - ((rand_range(0x40) - 0x20) << 8);
            scroll_y = sy - ((rand_range(0x40) - 0x20) << 8);
            rf_sprite(cur.x, cur.y, cur.sprite);
            frame_refresh();
        }
        win_grow(5, 1);
        print(ds_str(0x2408));
        wait_vbl(100);
        level_result = 3;
        return;
    }
    int t = tile_at(switch_x, switch_y);
    if (t == 0x10f) {
        lights(!lights_on);
        return;
    }
    if (t == 0x1e0)
        set_tile(switch_x, switch_y, 0x1ed);
    else if (t == 0x1ed)
        set_tile(switch_x, switch_y, 0x1e0);
    int info = info_at(switch_x, switch_y);
    int bx = switch_x + (int8_t)(info & 0xff);
    int by = switch_y + (int8_t)(info >> 8);
    int i;
    for (i = 0; i < numspecs; i++)
        if (specs[i].active && specs[i].x == bx && specs[i].y == by)
            break;
    if (i < numspecs) {
        specs[i].think = specs[i].think == spec_bridge_retract ? spec_bridge_extend
                                                                 : spec_bridge_retract;
        return;
    }
    spec_t *s = new_spec();
    s->active = 2;
    s->think = spec_bridge_extend;
    s->x = bx;
    s->y = by;
    s->cnt = 0;
    s->w6 = T_LEFT(tile_at(bx + 1, by)) ? -1 : 1;
    s->w7 = tile_at(bx, by);
    s->w8 = 0;
}

/* 0x2863: open a keycard door at tile (tx, ty). */
static void open_door(int tx, int ty)
{
    snd_play(0x21);
    int b = T_BEHAV(tile_at(tx, ty));
    int above = T_BEHAV(tile_at(tx, ty - 1));
    int top = above == b ? ty - 1 : ty;
    spec_t *s = new_spec();
    s->active = 1;
    s->think = spec_door;
    s->x = (int32_t)tx << 12;
    s->y = (int32_t)top << 12;
    s->cnt = 0;
    s->w6 = tile_at(tx, top + 3);
    s->w7 = tile_at(tx, top + 2);
    s->w8 = tile_at(tx, top);
    gs.keys[b - 2] = 0;
    set_tile(tx, top, 0x8f);
    set_tile(tx, top + 1, 0x8f);
}

/* 0x4373: Keen touching special tiles. */
static void keen_tiles(void)
{
    obj_t *k = &objs[0];
    if (k->think == keen_dying)
        return;
    on_switch = 0;
    int tx1 = k->x1 >> 12, tx2 = k->x2 >> 12, ty1 = k->y1 >> 12, ty2 = k->y2 >> 12;
    for (int tx = tx1; tx <= tx2; tx++)
        for (int ty = ty1; ty <= ty2; ty++) {
            int t = tile_at(tx, ty);
            int b = T_BEHAV(t);
            switch (b) {
            case 0:
            case -1:
                break;
            case 1:
                kill_keen();
                break;
            case 2: case 3: case 4: case 5:
                if (!gs.keys[b - 2]) {
                    if (k->dx < 1)
                        k->x = (k->x + 0x1000) & ~0xfff;
                    else
                        k->x &= ~0xfff;
                } else {
                    open_door(tx, ty);
                }
                break;
            case 6: case 7: case 8: case 9: case 10:
                add_score(ds_w(0x1fde + b * 2));
                snd_play(9);
                set_tile(tx, ty, t < 0x131 ? 0x8f : 0x114);
                break;
            case 11: case 12: case 13: case 14:
                if (b == 11) gs.joystick = 1;
                if (b == 12) gs.battery = 1;
                if (b == 13) gs.vacuum = 1;
                if (b == 14) gs.whiskey = 1;
                add_score(10000);
                snd_play(0xb);
                set_tile(tx, ty, 0x8f);
                break;
            case 15: case 16:
                if (b == 15) gs.ammo += 5;
                if (b == 16) gs.pogo = 1;
                snd_play(10);
                set_tile(tx, ty, 0x8f);
                break;
            case 17:
                if (k->think == keen_walk) {
                    snd_play(0xf);
                    k->think = keen_exit_walk;
                    k->touch = touch_none;
                    k->timer = tx + 2;
                    k->w2c = ty;
                }
                break;
            case 18: case 19: case 20: case 21:
                gs.keys[b - 18] = 1;
                snd_play(0x20);
                set_tile(tx, ty, 0x8f);
                break;
            case 22:
                statue_message();
                set_tile(tx, ty, cur_level == 11 ? 0x1b2 : 0x13b);
                break;
            case 23: case 25: case 26:
                on_switch = 1;
                switch_x = tx;
                switch_y = ty;
                break;
            case 24:
                level_result = 2;
                break;
            case 27:
                keen_invuln += 0x578;
                set_tile(tx, ty, t / 13 * 13);
                break;
            case 28:
                gs.ammo++;
                snd_play(10);
                break;
            }
        }
}

/* ------------------------------------------------------------------ */
/* Palettes from the EXE: 24CC black, 24DD dark, 24EE half, 24FF full. */

static uint8_t pals[4][17];
static const uint8_t *pal_full(void) { return pals[3]; }
static const uint8_t *pal_dark(void) { return pals[1]; }
const uint8_t *game_palette(int n) { return pals[n]; }

void palettes_init(void)
{
    for (int p = 0; p < 4; p++)
        for (int i = 0; i < 17; i++)
            pals[p][i] = ds_b(0x24cc + p * 17 + i);
}

/* ------------------------------------------------------------------ */
/* 0x4C32: play one level. Returns 0 died, 1 done, 2 teleported, 3 left. */

int play_level(int num)
{
    /* Keen's old position survives (actors spawned before his start
     * marker face him based on it, as in the original). */
    int32_t kx = objs[0].x, ky = objs[0].y;
    rf_hook = NULL;
    memset(objs, 0, sizeof objs);
    objs[0].x = kx;
    objs[0].y = ky;
    memset(specs, 0, sizeof specs);
    objs[0].type = OT_KEEN;
    objs[0].think = keen_walk;
    objs[0].touch = keen_touch;
    objs[0].sprite = 4;
    objs[0].active = 1;
    numobjs = 1;
    numspecs = 0;
    keen_facing = 1;
    tics = 0;
    keen_invuln = 0;
    godmode = 0;
    level_result = 0;
    plat_set_ticks(0);
    lasttick = 0;
    load_level(num);
    spawn_actors();

    scroll_x = objs[0].x - 0xa000;
    scroll_y = objs[0].y - 0x5000;
    if (scroll_x < scrollmin_x) scroll_x = scrollmin_x;
    if (scroll_y < scrollmin_y) scroll_y = scrollmin_y;
    if (scroll_x > scrollmax_x) scroll_x = scrollmax_x;
    if (scroll_y > scrollmax_y) scroll_y = scrollmax_y;

    frame_start();
    if (!warp_level)
        fade_out();
    lights_on = 1;
    scroll_tx = scroll_x >> 12;
    scroll_ty = scroll_y >> 12;
    frame_refresh();
    frame_refresh();
    fade_in();

    for (;;) {
        frame_start();
        read_ctrl(&ctrl);
        for (int i = 0; i < numobjs; i++) {
            obj_t *o = &objs[i];
            if (!o->type)
                continue;
            cur = *o;
            if (!cur.active) {
                int tx = cur.x >> 12, ty = cur.y >> 12;
                if (scroll_tx - 2 < tx && scroll_ty - 2 < ty && tx < scroll_tx + 0x17 &&
                    ty < scroll_ty + 0xc) {
                    cur.active = 1;
                    if (cur.think == yorp_stunned) {
                        cur.think = yorp_look;
                        cur.timer = 0;
                    }
                    calc_hitbox();
                    cur.dx = cur.dy = 0;
                    cur.think();
                    cur.x += cur.dx;
                    cur.y += cur.dy;
                    calc_hitbox();
                }
            } else if (i == 0 || !obj_offscreen()) {
                calc_hitbox();
                cur.dx = cur.dy = 0;
                cur.think();
                cur.x += cur.dx;
                cur.y += cur.dy;
                calc_hitbox();
            }
            *o = cur;
        }
        scroll_follow();
        for (int i = 0; i < numobjs; i++) {
            obj_t *a = &objs[i];
            if (!a->type || !a->active)
                continue;
            for (int j = i + 1; j < numobjs; j++) {
                obj_t *b = &objs[j];
                if (b->type && b->active && touching(a, b)) {
                    a->touch(a, b);
                    b->touch(b, a);
                }
            }
        }
        scroll_tx = scroll_x >> 12;
        scroll_ty = scroll_y >> 12;
        for (int i = numobjs - 1; i >= 0; i--)
            if (objs[i].type && objs[i].active)
                rf_sprite(objs[i].x, objs[i].y, objs[i].sprite);
        keen_tiles();
        for (int i = 0; i < numspecs; i++)
            if (specs[i].active)
                specs[i].think(&specs[i]);
        frame_refresh();
        ctrl_prev = ctrl;
        check_cheats();
        if (check_hotkeys())
            reset_frame_time();
        if (abort_game)
            return 0;
        if (level_result || objs[0].type == 0) {
            snd_wait();
            fade_out();
            for (int k = 0; k < 4; k++)
                gs.keys[k] = 0;
            if (level_result == 0) {
                if (num == 8)
                    gs.vacuum = 0;
                else if (num == 3)
                    gs.battery = 0;
                else if (num == 4)
                    gs.joystick = 0;
                else if (num == 16)
                    gs.whiskey = 0;
            }
            return level_result;
        }
    }
}
