/* Loading of the original Keen 1 data files and EXE tables. */
#include "kdata.h"

#include <ctype.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
/* The game files are preloaded read-only here; gamedir is the persistent
 * IndexedDB-backed directory for scores, settings and saves. */
#define WEB_DATA_DIR "/data"
#endif

int16_t tileinfo[6][NUMTILES];
uint16_t animtile[4][NUMTILES];
int map_w, map_h;
uint16_t *map_tiles, *map_info;
uint8_t *txt_help, *txt_story, *txt_end, *txt_previews;

static char gamedir[1024] = ".";
static uint8_t *exe_image;
static long exe_len;
static long ds_base;
int game_version = 11;

/* The port uses v1.1 data segment offsets. In v1.31 the same data moved;
 * these blocks (v1.1 offset, v1.31 offset, length) come from aligning the
 * two data segments (analysis/ds_v11_to_v131.txt). */
static const struct { uint16_t v11, v131, len; } ds_v131[] = {
    {0x0000, 0x0000, 152}, {0x009c, 0x009c, 7344}, {0x1d60, 0x1d4c, 429}, {0x1f0e, 0x1f03, 42},
    {0x1f48, 0x1f52, 153}, {0x1fe1, 0x201e, 7}, {0x1fe9, 0x2025, 1249}, {0x24cb, 0x2507, 1517},
    {0x2ae6, 0x2af4, 223}, {0x2bc6, 0x2bd3, 861}, {0x2f3d, 0x2f30, 36}, {0x2f61, 0x2f58, 35},
    {0x2f84, 0x2f80, 32}, {0x2fa4, 0x2fa8, 22}, {0x2fba, 0x2fcf, 34}, {0x2fdc, 0x2ff7, 38},
    {0x3002, 0x3020, 28}, {0x301e, 0x3048, 25}, {0x3037, 0x306f, 31}, {0x3056, 0x3097, 36},
    {0x307a, 0x30c0, 25}, {0x3093, 0x312f, 530}, {0x32a6, 0x3341, 81}, {0x32f8, 0x3392, 39},
    {0x3320, 0x33b9, 310}, {0x3456, 0x351a, 6882}, {0x4f40, 0x5004, 2}, {0x4f52, 0x5125, 426},
    {0x50fd, 0x52cf, 257}, {0x5204, 0x53d6, 16}, {0x5216, 0x53e8, 14}, {0x5226, 0x53f8, 14},
    {0x5236, 0x5408, 14}, {0x5246, 0x5418, 14}, {0x5256, 0x5428, 14}, {0x5266, 0x5438, 14},
    {0x5276, 0x5448, 14}, {0x5286, 0x5458, 14}, {0x5296, 0x5468, 14}, {0x52a6, 0x5478, 14},
    {0x52b6, 0x5488, 14}, {0x52c6, 0x5498, 14}, {0x52d6, 0x54a8, 14}, {0x52e6, 0x54b8, 14},
    {0x52f6, 0x54c8, 14}, {0x5306, 0x54d8, 14}, {0x5316, 0x54e8, 14}, {0x5326, 0x54f8, 14},
    {0x5336, 0x5508, 14}, {0x5346, 0x5518, 284}
};

static long ds_map(unsigned off)
{
    if (game_version == 11)
        return (long)off;
    for (size_t i = 0; i < sizeof ds_v131 / sizeof ds_v131[0]; i++)
        if (off >= ds_v131[i].v11 && off < (unsigned)ds_v131[i].v11 + ds_v131[i].len)
            return (long)off - ds_v131[i].v11 + ds_v131[i].v131;
    return -1;
}

void data_set_dir(const char *dir)
{
    snprintf(gamedir, sizeof gamedir, "%s", dir);
}

const char *data_dir(void)
{
    return gamedir;
}

/* Resolve a DOS file name against a directory, ignoring case. */
static int find_in(const char *dir, const char *name, char *out, size_t outlen)
{
    DIR *d = opendir(dir);
    if (!d)
        return 0;
    struct dirent *e;
    int found = 0;
    while ((e = readdir(d))) {
        if (strcasecmp(e->d_name, name) == 0) {
            snprintf(out, outlen, "%s/%s", dir, e->d_name);
            found = 1;
            break;
        }
    }
    closedir(d);
    return found;
}

/* Resolve a DOS file name against the game directory, ignoring case. */
static int find_path(const char *name, char *out, size_t outlen)
{
#ifdef __EMSCRIPTEN__
    if (find_in(gamedir, name, out, outlen))
        return 1;
    return find_in(WEB_DATA_DIR, name, out, outlen);
#else
    return find_in(gamedir, name, out, outlen);
#endif
}

int file_exists(const char *name)
{
    char path[1400];
    return find_path(name, path, sizeof path);
}

uint8_t *load_file(const char *name, long *len)
{
    char path[1400];
    if (!find_path(name, path, sizeof path))
        return NULL;
    FILE *f = fopen(path, "rb");
    if (!f)
        return NULL;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    uint8_t *buf = malloc(n + 16);
    if (fread(buf, 1, n, f) != (size_t)n) {
        free(buf);
        fclose(f);
        return NULL;
    }
    memset(buf + n, 0, 16);
    fclose(f);
    if (len)
        *len = n;
    return buf;
}

int save_file(const char *name, const void *data, long len)
{
    char path[1400];
    if (!find_in(gamedir, name, path, sizeof path)) {
        /* New files are created upper case, like DOS would show them. */
        char up[64];
        snprintf(up, sizeof up, "%s", name);
        for (char *p = up; *p; p++)
            *p = toupper((unsigned char)*p);
        snprintf(path, sizeof path, "%s/%s", gamedir, up);
    }
    FILE *f = fopen(path, "wb");
    if (!f)
        return 0;
    int ok = fwrite(data, 1, len, f) == (size_t)len;
    fclose(f);
#ifdef __EMSCRIPTEN__
    /* Flush the write to IndexedDB (web/pre.js). */
    EM_ASM(Module.syncSaves && Module.syncSaves());
#endif
    return ok;
}

/* ------------------------------------------------------------------ */
/* LZW as used by Keen 1-3: 4 byte length + 2 bytes, MSB-first codes
 * from 9 to 12 bits, dictionary from 258, 257 ends the stream. */

uint8_t *lzw_expand(const uint8_t *src, long srclen, long *outlen)
{
    long n = src[0] | src[1] << 8 | (long)src[2] << 16 | (long)src[3] << 24;
    uint8_t *out = malloc(n + 4096);
    uint16_t prefix[4096];
    uint8_t suffix[4096];
    uint8_t stack[4096];
    uint32_t bits = 0;
    int nbits = 0, width = 9, next = 258, prev = -1;
    uint8_t first = 0;
    long p = 6, o = 0;
    while (o < n) {
        while (nbits < width) {
            if (p >= srclen)
                goto done;
            bits = bits << 8 | src[p++];
            nbits += 8;
        }
        int code = (bits >> (nbits - width)) & ((1 << width) - 1);
        nbits -= width;
        if (code == 257)
            break;
        int c = code, sp = 0;
        if (code >= next) { /* KwKwK case */
            stack[sp++] = first;
            c = prev;
        }
        while (c >= 256) {
            stack[sp++] = suffix[c];
            c = prefix[c];
        }
        stack[sp++] = (uint8_t)c;
        first = (uint8_t)c;
        while (sp && o < n + 4096)
            out[o++] = stack[--sp];
        if (prev >= 0 && next < 4096) {
            prefix[next] = (uint16_t)prev;
            suffix[next] = first;
            next++;
        }
        prev = code;
        if (next + 1 >= (1 << width) && width < 12)
            width++;
    }
done:
    *outlen = n;
    return out;
}

/* ------------------------------------------------------------------ */
/* LZEXE 0.91 unpacker (the shipped KEEN1.EXE is compressed). */

static uint8_t *unlzexe(const uint8_t *d, long dlen, long *outlen)
{
    uint16_t ih[16];
    for (int i = 0; i < 16; i++)
        ih[i] = d[i * 2] | d[i * 2 + 1] << 8;
    if (ih[0] != 0x5a4d)
        return NULL;
    if (memcmp(d + 0x1c, "LZ91", 4) != 0) {
        /* Not compressed: return the load image. */
        long hsize = ih[4] * 16;
        uint8_t *img = malloc(dlen - hsize);
        memcpy(img, d + hsize, dlen - hsize);
        *outlen = dlen - hsize;
        return img;
    }
    long pos = ih[4] * 16;
    long cap = 0x40000, o = 0;
    uint8_t *out = malloc(cap);
    uint16_t buf = d[pos] | d[pos + 1] << 8;
    int count = 16;
    pos += 2;
#define GETBIT()                                                   \
    ({                                                             \
        int b_ = buf & 1;                                          \
        if (--count == 0) {                                        \
            buf = d[pos] | d[pos + 1] << 8;                        \
            pos += 2;                                              \
            count = 16;                                            \
        } else                                                     \
            buf >>= 1;                                             \
        b_;                                                        \
    })
    for (;;) {
        if (pos >= dlen || o + 300 >= cap)
            break;
        if (GETBIT()) {
            out[o++] = d[pos++];
            continue;
        }
        int len, span;
        if (!GETBIT()) {
            len = GETBIT() << 1;
            len |= GETBIT();
            len += 2;
            span = d[pos++] - 0x100;
        } else {
            int lo = d[pos++], hi = d[pos++];
            span = (lo | ((hi & ~7) << 5) | 0xe000) - 0x10000;
            len = (hi & 7) + 2;
            if (len == 2) {
                len = d[pos++];
                if (len == 0)
                    break;
                if (len == 1)
                    continue;
                len++;
            }
        }
        for (; len > 0; len--, o++)
            out[o] = o + span >= 0 ? out[o + span] : 0;
    }
#undef GETBIT
    *outlen = o;
    return out;
}

int exe_load(void)
{
    long len;
    uint8_t *raw = load_file("KEEN1.EXE", &len);
    if (!raw)
        return 0;
    exe_image = unlzexe(raw, len, &exe_len);
    free(raw);
    if (!exe_image)
        return 0;
    static const char sig[] = "Turbo C++ - Copyright 1990 Borland Intl.";
    ds_base = -1;
    for (long i = 0; i + (long)sizeof sig < exe_len; i++)
        if (memcmp(exe_image + i, sig, sizeof sig - 1) == 0) {
            ds_base = i - 4;
            break;
        }
    if (ds_base < 0)
        return 0;
    static const char v131[] = "(version 1.31";
    for (long i = 0; i + (long)sizeof v131 < exe_len; i++)
        if (memcmp(exe_image + i, v131, sizeof v131 - 1) == 0) {
            game_version = 131;
            break;
        }

    for (int a = 0; a < 6; a++)
        for (int t = 0; t < NUMTILES; t++)
            tileinfo[a][t] = ds_w(0xa8 + a * NUMTILES * 2 + t * 2);

    /* Tile animation tables, exactly like the game's startup code. */
    for (int t = 0; t < NUMTILES; t++) {
        int n = tileinfo[TI_ANIM][t];
        if (n == 1) {
            for (int f = 0; f < 4; f++)
                animtile[f][t] = t;
        } else if (n == 2) {
            animtile[0][t] = t; animtile[1][t] = t + 1;
            animtile[2][t] = t; animtile[3][t] = t + 1;
            t++;
            animtile[0][t] = t; animtile[1][t] = t - 1;
            animtile[2][t] = t; animtile[3][t] = t - 1;
        } else if (n == 4) {
            for (int k = 0; k < 4; k++)
                for (int f = 0; f < 4; f++)
                    animtile[f][t + k] = t + (k + f) % 4;
            t += 3;
        } else {
            for (int f = 0; f < 4; f++)
                animtile[f][t] = t;
        }
    }
    return 1;
}

int16_t tprop(int table, unsigned tile)
{
    if (tile < NUMTILES)
        return tileinfo[table][tile];
    unsigned addr = (0xa8 + table * NUMTILES * 2 + tile * 2) & 0xffff;
    unsigned rel = (addr - 0xa8) / 2;
    if (addr >= 0xa8 && rel < 6 * NUMTILES)
        return tileinfo[rel / NUMTILES][rel % NUMTILES];
    return ds_w(addr);
}

/* The four animation tables live at DS:3958, 3ED0, 4448, 49C0 (700 words). */
int tile_gfx(unsigned tile, int frame)
{
    if (tile < NUMTILES)
        return animtile[frame][tile];
    unsigned addr = (0x3958 + frame * 0x578 + tile * 2) & 0xffff;
    if (addr >= 0x3958 && addr < 0x3958 + 4 * 0x578) {
        unsigned f = (addr - 0x3958) / 0x578, i = (addr - 0x3958) % 0x578 / 2;
        if (i < NUMTILES)
            return animtile[f][i];
    }
    return -1;
}

int16_t ds_w(unsigned off)
{
    long m = ds_map(off), p = ds_base + m;
    if (m < 0 || p < 0 || p + 1 >= exe_len)
        return 0;
    return (int16_t)(exe_image[p] | exe_image[p + 1] << 8);
}

uint8_t ds_b(unsigned off)
{
    long m = ds_map(off), p = ds_base + m;
    if (m < 0 || p < 0 || p >= exe_len)
        return 0;
    return exe_image[p];
}

const char *ds_str(unsigned off)
{
    long m = ds_map(off);
    if (m < 0)
        return "";
    return (const char *)exe_image + ds_base + m;
}

/* String in the running version's own data segment (no translation). */
const char *ds_str_native(unsigned off)
{
    return (const char *)exe_image + ds_base + off;
}

/* ------------------------------------------------------------------ */
/* Levels: RLEW (0xFEFE) compressed map files. */

int load_level_file(int num)
{
    char name[16];
    snprintf(name, sizeof name, "LEVEL%02d.CK1", num);
    long len;
    uint8_t *raw = load_file(name, &len);
    if (!raw)
        return 0;
    long n = (raw[0] | raw[1] << 8 | (long)raw[2] << 16) / 2;
    /* LEVEL16.CK1 ends 22 words short of its declared size: zero fill. */
    uint16_t *w = calloc(n + 32, 2);
    long o = 0, p = 4;
    while (o < n && p + 1 < len) {
        uint16_t v = raw[p] | raw[p + 1] << 8;
        p += 2;
        if (v == 0xfefe) {
            uint16_t cnt = raw[p] | raw[p + 1] << 8;
            uint16_t val = raw[p + 2] | raw[p + 3] << 8;
            p += 4;
            while (cnt-- && o < n)
                w[o++] = val;
        } else {
            w[o++] = v;
        }
    }
    free(raw);
    map_w = w[0];
    map_h = w[1];
    int planesize = w[7] / 2;
    free(map_tiles);
    free(map_info);
    map_tiles = malloc(map_w * map_h * 2);
    map_info = malloc(map_w * map_h * 2);
    memcpy(map_tiles, w + 16, map_w * map_h * 2);
    memcpy(map_info, w + 16 + planesize, map_w * map_h * 2);
    free(w);
    return 1;
}

/* ------------------------------------------------------------------ */
/* Text files: same reflow as the game's loader. A single CR LF joins
 * lines, blank lines are kept, 0x1F forces a break. */

static uint8_t *load_text(const char *name)
{
    long len;
    uint8_t *t = load_file(name, &len);
    if (!t) {
        t = malloc(2);
        t[0] = 0x1a;
        return t;
    }
    uint8_t *p = realloc(t, len + 2);
    p[len] = 0x1a;
    p[len + 1] = 0;
    long end = 0;
    while (p[end] != 0x1a)
        end++;
    long si = 0;
    while (p[si] != 0x1a) {
        uint8_t c = p[si];
        if (c == 0x1f) {
            p[si] = '\r';
        } else if (c == '\r' && p[si + 2] != '\r') {
            p[si] = ' ';
            memmove(p + si + 1, p + si + 2, end - si);
            end--;
        } else if (c == '\r') {
            while (p[si] == '\r')
                si += 2;
            si--;
        }
        si++;
    }
    return p;
}

void load_texts(void)
{
    txt_help = load_text("HELPTEXT.CK1");
    txt_story = load_text("STORYTXT.CK1");
    txt_end = load_text("ENDTEXT.CK1");
    txt_previews = load_text("PREVIEWS.CK1");
}
