/* Commander Keen 1 game logic, reconstructed from KEEN1.EXE (v1.1). */
#ifndef GAME_H
#define GAME_H

#include <stdint.h>

/* Object: same layout and meaning as the original 0x36 byte records. */
typedef struct obj obj_t;
typedef void (*think_t)(void);
typedef void (*touch_t)(obj_t *self, obj_t *other);

enum {
    OT_NONE, OT_KEEN, OT_YORP, OT_GARG, OT_VORT, OT_BUTLER, OT_TANK, OT_7, OT_CHAIN,
    OT_9, OT_KEENSHOT, OT_ENEMYSHOT, OT_ICECHUNK, OT_SPLASH, OT_DEAD, OT_ICEBLOCK
};

struct obj {
    int16_t type;            /* 0x00 */
    int16_t active;          /* 0x02 on screen and thinking */
    int32_t x, y;            /* 0x04 position, 1/256 pixel */
    int32_t x1, y1, x2, y2;  /* 0x0c hitbox in world coordinates */
    int16_t dx, dy;          /* 0x1c movement this frame */
    int16_t xv, yv;          /* 0x20 velocity per tick */
    int16_t w24, w26;        /* 0x24 health / base sprite */
    int16_t sprite;          /* 0x28 */
    int16_t timer;           /* 0x2a */
    int16_t w2c, w2e;        /* 0x2c work values */
    int16_t w30;             /* 0x30 */
    think_t think;           /* 0x32 */
    touch_t touch;           /* 0x34 */
};

/* "Special" level objects (doors, bridges, cannons, ...), 0x24 bytes. */
typedef struct spec spec_t;
struct spec {
    int32_t x, y;            /* 0x00 tile coordinates (or world for doors) */
    int16_t active;          /* 0x08 */
    int16_t cnt;             /* 0x0a */
    int16_t w6, w7, w8;      /* 0x0c 0x0e 0x10 */
    void (*think)(spec_t *); /* 0x22 */
};

#define MAXOBJS 60
#define MAXSPECS 16

/* Saved game state: identical to the 92 byte SAVEDn.CK1 files (DS:A5C0). */
#pragma pack(push, 1)
typedef struct {
    int16_t joystick;        /* ship parts */
    int16_t vacuum;
    int16_t whiskey;
    int16_t pogo;
    int16_t battery;
    int16_t keys[4];         /* yellow, red, green, blue keycards */
    int16_t done[16];        /* levels 1..16 completed */
    int16_t lives;
    int16_t ammo;
    int32_t score;
    int32_t mapx, mapy;      /* Keen on the world map */
    int32_t mapsx, mapsy;    /* world map scroll */
    int16_t unused[8];
    int16_t unused2;
} gamestate_t;
#pragma pack(pop)

extern gamestate_t gs;

/* Controls (DS:79C2): direction 0..7 clockwise from up, 8 = none. */
typedef struct {
    int16_t dir, b1, b2;
} ctrl_t;
extern ctrl_t ctrl, ctrl_prev;

/* Engine state */
extern int tics;
extern obj_t objs[MAXOBJS], cur;
extern int numobjs;
extern spec_t specs[MAXSPECS];
extern int numspecs;
extern int cur_level;
extern int scroll_tx, scroll_ty;
extern int32_t scrollmin_x, scrollmin_y, scrollmax_x, scrollmax_y;
extern int32_t objmax_x, objmax_y, keenmax_x, keendeath_y;
extern int keen_facing, lights_on, keen_invuln, on_switch, switch_x, switch_y;
extern int level_result, godmode, abort_game, warp_level;
extern int32_t last_extra;
extern int in_world_map;

/* engine.c */
void frame_start(void);
void frame_refresh(void);
void load_level(int num);
int play_level(int num);
void read_ctrl(ctrl_t *c);
int tile_at(int tx, int ty);
void set_tile(int tx, int ty, int t);
obj_t *new_obj(void);
spec_t *new_spec(void);
void calc_hitbox(void);
void calc_hitbox_obj(obj_t *o);
void accel_x(int a);
void gravity(void);
int move_obj(void);
int clip_move(void);
void add_score(int pts);
void kill_keen(void);
int rand8(void);
int rand_range(int max);
void think_none(void);
void touch_none(obj_t *self, obj_t *other);
void keen_walk(void);
void keen_touch(obj_t *self, obj_t *other);
void think_splash(void);
void think_dying(void);
void think_dead(void);
int check_hotkeys(void);
void check_cheats(void);

/* actors.c */
void spawn_actors(void);
void yorp_look(void);
void yorp_stunned(void);
void spawn_tankshot(int32_t x, int32_t y, int xv);
void spec_door(spec_t *s);
void spec_bridge_extend(spec_t *s);
void spec_bridge_retract(spec_t *s);
void spec_none(spec_t *s);

/* ui.c */
void win_open(int x1, int y1, int x2, int y2);
void win_center(int w, int h);
void win_grow(int w, int h);
void win_clear(int x1, int y1, int x2, int y2, int ch);
void print(const char *s);
void print_hi(const char *s);
void print_centered(const char *s);
int wait_key(void);
int input_line(char *buf, int max);
void flush_input(void);
void fade_in(void);
void fade_out(void);
void set_palette_black(void);
void status_screen(void);
void help_screen(void);
void quit_menu(void);
void statue_message(void);
void show_pic(const char *name);
void text_viewer(const uint8_t *text, int toprow, int botrow);
void wait_vbl(int n);
extern int cur_x, cur_y, margin_x;
extern int key_peek(void);
extern int key_get(void);

/* menus.c */
void title_loop(void);
void play_game(void);
void save_game_prompt(void);
int load_game_prompt(void);
void ending(void);
void high_scores_check(void);
void load_scores(void);
void controls_load(void);

#endif
