/* Commander Keen 1: Marooned on Mars - native Linux port.
 *
 * Reconstructed from KEEN1.EXE v1.1 (reverse engineered with REA + Ghidra).
 * Needs the original data files (EGAHEAD.CK1, LEVELnn.CK1, KEEN1.EXE, ...). */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#include "game.h"
#include "gfx.h"
#include "kdata.h"
#include "platform.h"

extern void rng_init(void);
extern void palettes_init(void);

static int has_game(const char *dir)
{
    char path[PATH_MAX];
    snprintf(path, sizeof path, "%s/EGAHEAD.CK1", dir);
    if (access(path, R_OK) == 0)
        return 1;
    snprintf(path, sizeof path, "%s/egahead.ck1", dir);
    return access(path, R_OK) == 0;
}

static void find_data_dir(const char *opt)
{
    if (opt) {
        data_set_dir(opt);
        return;
    }
    const char *env = getenv("KEEN1_DATA");
    if (env && has_game(env)) {
        data_set_dir(env);
        return;
    }
    if (has_game(".")) {
        data_set_dir(".");
        return;
    }
    char exe[PATH_MAX];
    ssize_t n = readlink("/proc/self/exe", exe, sizeof exe - 1);
    if (n > 0) {
        exe[n] = 0;
        char *slash = strrchr(exe, '/');
        if (slash)
            *slash = 0;
        char path[PATH_MAX + 8];
        snprintf(path, sizeof path, "%s/data", exe);
        if (has_game(path)) {
            data_set_dir(path);
            return;
        }
        if (has_game(exe)) {
            data_set_dir(exe);
            return;
        }
    }
    data_set_dir(".");
}

static void usage(void)
{
    puts("Usage: keen1 [--data DIR] [--fullscreen] [--scale N] [--level N]\n"
         "  --data DIR    directory with the Keen 1 files (KEEN1.EXE, *.CK1)\n"
         "  --fullscreen  start in fullscreen (Alt+Enter toggles)\n"
         "  --scale N     window size multiplier (default 3)\n"
         "  --level N     play level N directly (like KEEN1 /LEVELnn)\n\n"
         "Controls: arrows move, Ctrl jump, Alt pogo, Ctrl+Alt fire,\n"
         "Space status, F1 help, F2 sound, F3 keys, F5 save, Esc quit.");
}

int main(int argc, char **argv)
{
    const char *datadir = NULL;
    int fullscreen = 0, scale = 3;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "--data") && i + 1 < argc)
            datadir = argv[++i];
        else if (!strcmp(argv[i], "--fullscreen"))
            fullscreen = 1;
        else if (!strcmp(argv[i], "--scale") && i + 1 < argc)
            scale = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--level") && i + 1 < argc)
            warp_level = atoi(argv[++i]);
        else if (!strncasecmp(argv[i], "/LEVEL", 6))
            warp_level = atoi(argv[i] + 6);
        else {
            usage();
            return strcmp(argv[i], "--help") == 0 ? 0 : 1;
        }
    }
#ifdef __EMSCRIPTEN__
    /* web/pre.js mounts IndexedDB storage here; kdata.c reads the game
     * files from /data. */
    datadir = "/save";
#endif
    if (scale < 1)
        scale = 1;
    if (warp_level < 0 || warp_level > 16)
        warp_level = 0;
    find_data_dir(datadir);

    if (!exe_load()) {
        fprintf(stderr, "Cannot read KEEN1.EXE in '%s'.\n"
                        "Point --data at the Commander Keen 1 game files.\n", data_dir());
        return 1;
    }
    if (!gfx_load()) {
        fprintf(stderr, "Cannot read the EGA graphics files in '%s'.\n", data_dir());
        return 1;
    }
    long slen;
    uint8_t *snd = load_file("SOUNDS.CK1", &slen);
    if (plat_init(scale, fullscreen) != 0)
        return 1;
    if (snd)
        snd_load(snd, slen);
    load_texts();
    load_scores();
    controls_load();
    palettes_init();
    rng_init();
    set_palette_black();
    plat_present();

    for (;;) {
        title_loop();
        play_game();
    }
}
