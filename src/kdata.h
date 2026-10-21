/* Game data: original files, tables from KEEN1.EXE's data segment, levels. */
#ifndef KDATA_H
#define KDATA_H

#include <stdint.h>

#define NUMTILES 611

void data_set_dir(const char *dir);
const char *data_dir(void);
/* Load a file from the game directory (case-insensitive). Caller frees. */
uint8_t *load_file(const char *name, long *len);
int save_file(const char *name, const void *data, long len);
int file_exists(const char *name);

/* Keen 1-3 LZW (EGALATCH/EGASPRIT). */
uint8_t *lzw_expand(const uint8_t *src, long srclen, long *outlen);

/* KEEN1.EXE: unpacked at startup, data segment (DGROUP) located by the
 * Turbo C copyright string at DS:0004. */
int exe_load(void);
int16_t ds_w(unsigned off);
uint8_t ds_b(unsigned off);
const char *ds_str(unsigned off);
const char *ds_str_native(unsigned off);
/* 11 for KEEN1.EXE v1.1, 131 for the v1.31 shareware release. */
extern int game_version;

/* Tile property tables from the EXE (DS:00A8, six arrays of NUMTILES words). */
enum { TI_ANIM, TI_BEHAV, TI_TOP, TI_RIGHT, TI_BOTTOM, TI_LEFT };
extern int16_t tileinfo[6][NUMTILES];
/* Out of range tile numbers (damaged level data) are looked up the way the
 * original does: as a word read past the end of the table in its data segment. */
int16_t tprop(int table, unsigned tile);
#define T_BEHAV(t) tprop(TI_BEHAV, t)
#define T_TOP(t) tprop(TI_TOP, t)
#define T_RIGHT(t) tprop(TI_RIGHT, t)
#define T_BOTTOM(t) tprop(TI_BOTTOM, t)
#define T_LEFT(t) tprop(TI_LEFT, t)
/* Animated tile lookup: animtile[frame][tile] (built like the original). */
extern uint16_t animtile[4][NUMTILES];
int tile_gfx(unsigned tile, int frame);

/* Current level (RLEW LEVELnn.CK1): plane 0 tiles, plane 1 objects/info. */
extern int map_w, map_h;
extern uint16_t *map_tiles, *map_info;
#define MAPT(x, y) map_tiles[(y) * map_w + (x)]
#define MAPI(x, y) map_info[(y) * map_w + (x)]
int load_level_file(int num);

/* Text files (HELPTEXT, STORYTXT, ENDTEXT, PREVIEWS), preprocessed. */
extern uint8_t *txt_help, *txt_story, *txt_end, *txt_previews;
void load_texts(void);

#endif
