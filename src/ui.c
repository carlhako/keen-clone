/* Text windows, prompts, status screen, text viewer, function keys
 * (KEEN1.EXE 0x082B..0x129D, 0x6118..0x67AE, 0xA17D..0xB7C8). */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "game.h"
#include "gfx.h"
#include "kdata.h"
#include "platform.h"

int cur_x, cur_y, margin_x;
static int win_x1, win_y1, win_x2, win_y2;
#define WIN_CX 0x17
static int win_cy = 11;

extern const uint8_t *game_palette(int n);
extern void reset_frame_time(void);

void wait_vbl(int n)
{
    plat_vsync(n);
}

int key_peek(void)
{
    return plat_bioskey(1);
}

int key_get(void)
{
    int k;
    while (!(k = plat_bioskey(0)))
        plat_vsync(1);
    return k;
}

/* 0x5E1F: drain the keyboard buffer and the key state table. */
void flush_input(void)
{
    while (plat_bioskey(0))
        ;
    plat_clear_keys();
}

/* 0x6E40 / 0x6E84 */
void fade_in(void)
{
    wait_vbl(1);
    plat_set_palette(game_palette(0));
    wait_vbl(8);
    plat_set_palette(game_palette(1));
    wait_vbl(8);
    plat_set_palette(game_palette(3));
    plat_present();
}

void fade_out(void)
{
    wait_vbl(1);
    plat_set_palette(game_palette(3));
    wait_vbl(8);
    plat_set_palette(game_palette(2));
    wait_vbl(8);
    plat_set_palette(game_palette(1));
    wait_vbl(8);
    plat_set_palette(game_palette(0));
    plat_present();
}

void set_palette_black(void)
{
    plat_set_palette(game_palette(0));
}

/* ------------------------------------------------------------------ */
/* Windows: font characters 1-8 are the frame pieces. */

void win_open(int x1, int y1, int x2, int y2)
{
    win_x1 = x1; win_y1 = y1; win_x2 = x2; win_y2 = y2;
    draw_char(x1, y1 * 8, 1);
    for (int x = x1 + 1; x < x2; x++)
        draw_char(x, y1 * 8, 2);
    draw_char(x2, y1 * 8, 3);
    for (int y = y1 + 1; y < y2; y++) {
        draw_char(x1, y * 8, 4);
        for (int x = x1 + 1; x < x2; x++)
            draw_char(x, y * 8, ' ');
        draw_char(x2, y * 8, 5);
    }
    draw_char(x1, y2 * 8, 6);
    for (int x = x1 + 1; x < x2; x++)
        draw_char(x, y2 * 8, 7);
    draw_char(x2, y2 * 8, 8);
    margin_x = cur_x = x1 + 1;
    cur_y = y1 + 1;
}

void win_center(int w, int h)
{
    int x1 = WIN_CX - w / 2, y1 = win_cy - h / 2;
    win_open(x1, y1, x1 + w + 1, y1 + h + 1);
}

static void grow_w(int w, int h)
{
    if (w > 2)
        grow_w(w - 2, h);
    wait_vbl(1);
    win_center(w, h);
}

static void grow_h(int w, int h)
{
    if (h > 2)
        grow_h(w, h - 2);
    wait_vbl(1);
    win_center(w, h);
}

/* 0x62B8: window that grows from the centre. */
void win_grow(int w, int h)
{
    if (w < 3) {
        if (h > 2)
            grow_h(w, h - 2);
    } else if (h < 3) {
        grow_w(w - 2, h);
    } else {
        win_grow(w - 2, h - 2);
    }
    wait_vbl(1);
    win_center(w, h);
}

/* 0x8340: blank the last window with font character 0. */
void ui_clear_last_window(void)
{
    win_clear(win_x1, win_y1, win_x2, win_y2, 0);
}

void win_clear(int x1, int y1, int x2, int y2, int ch)
{
    for (int y = y1; y <= y2; y++)
        for (int x = x1; x <= x2; x++)
            draw_char(x, y * 8, ch);
}

static void print_with(const char *s, int add)
{
    for (; *s; s++) {
        if (*s == '\n') {
            cur_y++;
            cur_x = margin_x;
        } else if (*s == '\r') {
            cur_x = margin_x;
        } else {
            draw_char(cur_x++, cur_y * 8, (uint8_t)(*s + add));
        }
    }
}

void print(const char *s) { print_with(s, 0); }
void print_hi(const char *s) { print_with(s, 0x80); }

void print_centered(const char *s)
{
    cur_x = WIN_CX + 1 - (int)strlen(s) / 2;
    print(s);
}

/* 0x6462: blinking cursor until a key is pressed; returns its ascii. */
int wait_key(void)
{
    int k;
    for (;;) {
        for (int i = 9; i <= 0xc; i++) {
            if ((k = key_peek()))
                goto got;
            draw_char(cur_x, cur_y * 8, i);
            wait_vbl(5);
        }
    }
got:
    draw_char(cur_x, cur_y * 8, ' ');
    plat_present();
    return key_get() & 0xff;
}

/* 0x67AE */
int input_line(char *buf, int max)
{
    int n = 0, c;
    do {
        c = toupper(wait_key());
        if ((c == 0x7f || c == 8) && n > 0) {
            n--;
            draw_char(cur_x, cur_y * 8, ' ');
            cur_x--;
        }
        if (c > 0x1f && c < 0x7b && n < max) {
            buf[n++] = (char)c;
            draw_char(cur_x++, cur_y * 8, c);
        }
    } while (c != 0x1b && c != '\r');
    for (; n < max; n++)
        buf[n] = 0;
    return c == '\r';
}

/* ------------------------------------------------------------------ */
/* 0x0E76: status screen (space bar). */

void status_screen(void)
{
    uint32_t saved = plat_ticks();
    flush_input();
    win_grow(0x1c, 0xd);
    int y0 = cur_y, x0 = cur_x;
    char num[16];
    print_hi(ds_str(0x1e16));
    cur_x = x0 + 0xc; print_hi(ds_str(0x1e34));
    print_hi(ds_str(0x1e37));
    cur_x = x0 + 0xe; print_hi(ds_str(0x1e55));
    cur_x = x0 + 0xe; print_hi(ds_str(0x1e58));
    cur_x = x0 + 0xe; print_hi(ds_str(0x1e5b));
    print_hi(ds_str(0x1e5e));
    cur_x = x0 + 8; print_hi(ds_str(0x1e7c));
    cur_x += 6; print_hi(ds_str(0x1e7e));
    cur_x = x0 + 8; print_hi(ds_str(0x1e81));
    cur_x += 6; print_hi(ds_str(0x1e83));
    cur_x = x0 + 8; print_hi(ds_str(0x1e86));
    cur_x += 6; print_hi(ds_str(0x1e88));
    print_hi(ds_str(0x1e8b));
    cur_x += 6; print_hi(ds_str(0x1e95));
    cur_x = x0 + 8; print_hi(ds_str(0x1e98));
    cur_x += 6; print_hi(ds_str(0x1e9a));
    print_hi(ds_str(0x1e9d));

    snprintf(num, sizeof num, "%ld", (long)gs.score);
    cur_x = x0 + 10 - (int)strlen(num);
    cur_y = y0 + 1;
    print(num);
    snprintf(num, sizeof num, "%ld", (long)(last_extra + 20000));
    cur_x = x0 + 0x1a - (int)strlen(num);
    print(num);
    for (int i = 0; i < gs.lives && i < 6; i++)
        draw_sprite_at(x0 + i * 2 + 1, (y0 + 3) * 8, 0);
    int x = x0 + 0x10, y = y0 + 3;
    draw_tile_at(x, y * 8 + 4, gs.joystick ? 0x1c0 : 0x141);
    draw_tile_at(x + 3, y * 8 + 4, gs.battery ? 0x1c1 : 0x142);
    draw_tile_at(x + 6, y * 8 + 4, gs.vacuum ? 0x1c2 : 0x143);
    draw_tile_at(x + 9, y * 8 + 4, gs.whiskey ? 0x1c3 : 0x144);
    x = x0 + 0x13;
    y = y0 + 7;
    if (gs.keys[0]) draw_tile_at(x, y * 8 + 3, 0x1a8);
    if (gs.keys[1]) draw_tile_at(x + 4, y * 8 + 3, 0x1a9);
    if (gs.keys[2]) draw_tile_at(x, y * 8 + 0x15, 0x1aa);
    if (gs.keys[3]) draw_tile_at(x + 4, y * 8 + 0x15, 0x1ab);
    draw_tile_at(x0 + 3, (y0 + 7) * 8 + 4, 0x19e);
    cur_x = x0 + 3;
    cur_y = y0 + 0xb;
    snprintf(num, sizeof num, "%d", gs.ammo);
    print(num);
    if (gs.pogo)
        draw_tile_at(x0 + 0xb, (y0 + 8) * 8 + 4, 0x19f);
    flush_input();
    key_get();
    flush_input();
    plat_set_ticks(saved);
}

/* 0x255F: messages from the Yorp statues. */
void statue_message(void)
{
    uint32_t saved = plat_ticks();
    static const struct { int level; unsigned off[7]; } msgs[] = {
        {2, {0x1ff4, 0x200a, 0x2020, 0x2036, 0x204c, 0x2062, 0x2078}},
        {6, {0x208e, 0x20a4, 0x20ba, 0x20d0, 0x20e6, 0x20fc, 0x2112}},
        {9, {0x2128, 0x213e, 0x2154, 0x216a, 0x2180, 0x2196, 0x21ac}},
        {10, {0x21c2, 0x21d8, 0x21ee, 0x2204, 0x221a, 0x2230, 0x2246}},
        {11, {0x225c, 0x2272, 0x2288, 0x229e, 0, 0, 0}},
        {12, {0x22b4, 0x22ca, 0x22e0, 0x22f6, 0x230d, 0x2323, 0x2339}},
        {15, {0x234f, 0x2365, 0x237b, 0x2391, 0x23a7, 0x23bd, 0}},
    };
    win_center(0x15, 10);
    for (size_t i = 0; i < sizeof msgs / sizeof msgs[0]; i++)
        if (msgs[i].level == cur_level)
            for (int l = 0; l < 7 && msgs[i].off[l]; l++)
                print(ds_str(msgs[i].off[l]));
    cur_y = win_cy + 5;
    print_centered(ds_str(0x23d3));
    flush_input();
    while (wait_key() != '\r')
        ;
    flush_input();
    plat_set_ticks(saved);
}

/* 0x082B: Esc */
void quit_menu(void)
{
    flush_input();
    int c;
    if (cur_level == 0x5a) {
        win_grow(0xc, 1);
        print(ds_str(0x1d6f));
        c = toupper(wait_key());
        if (c == 'Y') {
            plat_shutdown();
            exit(0);
        }
    } else {
        win_grow(0x14, 2);
        print(ds_str(0x1d7c));
        print(ds_str(0x1d8e));
        c = toupper(wait_key());
        if (c == 'D') {
            plat_shutdown();
            exit(0);
        }
        if (c == 'T')
            abort_game = 1;
    }
}

/* 0x0DEC: C+T+Space cheat */
static void cheat_items(void)
{
    uint32_t saved = plat_ticks();
    flush_input();
    win_grow(0x1a, 4);
    print(ds_str(0x1db2));
    print(ds_str(0x1dc9));
    print(ds_str(0x1de5));
    print(ds_str(0x1dfd));
    gs.pogo = 1;
    gs.ammo = 100;
    for (int i = 0; i < 4; i++)
        gs.keys[i] = 1;
    wait_key();
    frame_refresh();
    plat_set_ticks(saved);
    flush_input();
}

/* 0x122C */
void check_cheats(void)
{
    if (keydown[0x2e] && keydown[0x14] && keydown[0x39])
        cheat_items();
    if (keydown[0x22] && keydown[0x18] && keydown[0x20]) {
        flush_input();
        win_grow(0x14, 1);
        godmode ^= 1;
        print(ds_str(godmode ? 0x1eba : 0x1ecb));
        wait_key();
        flush_input();
    } else if (keydown[0x39]) {
        status_screen();
    }
}

/* 0x0C51: function keys. Returns 1 if the game was paused by a menu. */
extern void controls_menu(void);
extern void save_game_prompt(void);

int check_hotkeys(void)
{
    int k = key_peek();
    int scan = k >> 8;
    if (!scan)
        return 0;
    uint32_t saved = plat_ticks();
    int handled = 1;
    switch (scan) {
    case 0x01:
        key_get();
        snd_stop();
        quit_menu();
        break;
    case 0x3b:
        key_get();
        snd_stop();
        flush_input();
        help_screen();
        break;
    case 0x3c: {
        key_get();
        snd_stop();
        flush_input();
        win_grow(0xd, 1);
        print(ds_str(0x1da5));
        int c = toupper(wait_key());
        if (c == 'N')
            snd_enabled = 0;
        else if (c == 'Y')
            snd_enabled = 1;
        break;
    }
    case 0x3d:
        key_get();
        snd_stop();
        flush_input();
        controls_menu();
        break;
    case 0x3f:
        key_get();
        snd_stop();
        save_game_prompt();
        break;
    default:
        handled = 0;
        break;
    }
    if (handled) {
        plat_set_ticks(saved);
        flush_input();
    }
    return handled;
}

/* ------------------------------------------------------------------ */
/* 0x0983: show a compressed full screen picture (FINALE, PREVIEWn). */

void show_pic(const char *name)
{
    long len;
    uint8_t *src = load_file(name, &len);
    if (!src)
        return;
    long n = src[0] | src[1] << 8 | (long)src[2] << 16 | (long)src[3] << 24;
    uint8_t *pic = calloc(1, n > 0x8000 ? n : 0x8000);
    long p = 4, o = 0;
    while (o < n && p < len) {
        int b = src[p++];
        if (b < 0x80) {
            int cnt = b + 3;
            uint8_t v = src[p++];
            while (cnt-- && o < n)
                pic[o++] = v;
        } else {
            int cnt = b - 0x7f;
            while (cnt-- && o < n && p < len)
                pic[o++] = src[p++];
        }
    }
    free(src);
    for (int y = 0; y < 200; y++)
        for (int xb = 0; xb < 40; xb++) {
            int off = y * 40 + xb;
            for (int bit = 0; bit < 8; bit++) {
                int m = 0x80 >> bit, c = 0;
                for (int pl = 0; pl < 4; pl++)
                    if (pic[pl * 0x2000 + off] & m)
                        c |= 1 << pl;
                screen[y * SCR_W + xb * 8 + bit] = (uint8_t)c;
            }
        }
    free(pic);
    plat_present();
}

/* ------------------------------------------------------------------ */
/* 0xA17D: scrolling text viewer (help, story, ending, previews). */

#define MAXLINES 200
static struct { int start, len; } lines[MAXLINES + 1];
static const uint8_t *view_text;
static int view_top, view_bot, view_n;

/* 0xB667: word wrap at 38 columns. */
static int wrap_text(const uint8_t *t, int width, int maxlines)
{
    int start = 0, n = 0;
    for (;;) {
        int state = 0, i;
        lines[n].start = start;
        for (i = start; i < start + width; i++) {
            if (t[i] == 0x1a) {
                state = 2;
                lines[n].len = i - start;
                lines[n + 1].start = -1;
                break;
            }
            if (t[i] == '\r') {
                lines[n].len = i - start + 1;
                n++;
                start = i + 2;
                state = 1;
                break;
            }
        }
        if (state == 0) {
            for (; start < i; i--)
                if (t[i] == ' ') {
                    lines[n].len = i - start;
                    n++;
                    start = i + 1;
                    break;
                }
            if (i == start) {
                lines[n].len = width;
                n++;
                start += width;
            }
        }
        if (n == maxlines) {
            lines[n - 1].start = -1;
            state = 2;
        }
        if (state > 1)
            return n;
    }
}

/* 0xB3CB */
static void draw_lines(int col, int row, int first, int count)
{
    cur_y = row;
    for (int l = first; l < first + count && l <= MAXLINES; l++) {
        if (lines[l].start < 0)
            break;
        int s = lines[l].start, len = lines[l].len, hi = 0;
        cur_x = col;
        if (len > 0 && view_text[s + len - 1] == '\r')
            len--;
        if (view_text[s] == '~') {
            hi = 0x80;
            s++;
            len--;
        }
        for (int i = 0; i < len; i++)
            draw_char(cur_x++, cur_y * 8, (view_text[s + i] + hi) & 0xff);
        if (cur_x < 0x2b)
            for (int x = cur_x; x <= 0x2a; x++)
                draw_char(x, cur_y * 8, hi + 0x20);
        cur_y++;
    }
    cur_x = col;
}

static void viewer_frame(void)
{
    win_open(4, view_top, 0x2b, view_bot);
    draw_char(4, (view_bot + 1) * 8, 4);
    draw_char(0x2b, (view_bot + 1) * 8, 4);
    draw_char(4, (view_bot + 2) * 8, 1);
    draw_char(0x2b, (view_bot + 2) * 8, 3);
    for (int x = 5; x < 0x2b; x++)
        draw_char(x, (view_bot + 2) * 8, 2);
    int sx = cur_x, sy = cur_y;
    cur_x = 5;
    cur_y = view_bot + 1;
    print_hi(ds_str(0x3219));
    cur_x = sx;
    cur_y = sy;
    draw_lines(5, view_top + 1, 0, view_n);
}

void text_viewer(const uint8_t *text, int top, int bot)
{
    int span = bot - top, visible = span - 1;
    view_text = text;
    view_top = top;
    view_bot = bot;
    view_n = visible;
    int nlines = wrap_text(text, 0x26, MAXLINES);
    rf_begin();
    rf_hook = viewer_frame;
    frame_refresh();
    rf_hook = NULL;
    int pos = 0;
    wait_vbl(8);
    ctrl_t c;
    for (;;) {
        read_ctrl(&c);
        int up = keydown[0x48] || c.dir == 0;
        int down = keydown[0x50] || c.dir == 4;
        if (!up && c.dir != 0 && down) {
            if (pos <= nlines - visible && pos <= MAXLINES - visible) {
                pos++;
                scroll_text_area(top + 1, bot - 1, 1);
                draw_lines(5, bot - 1, pos + visible - 1, 1);
            }
        } else if (up && pos > 0) {
            pos--;
            scroll_text_area(top + 1, bot - 1, 0);
            draw_lines(5, top + 1, pos, 1);
        }
        if (keydown[0x49]) {
            if (pos - visible < 0)
                pos = 0;
            else
                pos -= span - 2;
            draw_lines(5, top + 1, pos, visible);
            while (keydown[0x49])
                wait_vbl(1);
        }
        if (keydown[0x51]) {
            if (pos + visible * 2 < nlines)
                pos += span - 2;
            else
                pos = nlines - visible + 1;
            draw_lines(5, top + 1, pos, visible);
            while (keydown[0x51])
                wait_vbl(1);
        }
        wait_vbl(1);
        if (keydown[0x01] || c.b1 || c.b2)
            break;
    }
    do {
        read_ctrl(&c);
        wait_vbl(1);
    } while (c.b1 || c.b2);
    flush_input();
}

/* 0x9FE9: F1 help */
void help_screen(void)
{
    int32_t sx = scroll_x, sy = scroll_y;
    scroll_x &= ~0xfff;
    scroll_y &= ~0xfff;
    text_viewer(txt_help, 1, 0x14);
    scroll_x = sx;
    scroll_y = sy;
}
