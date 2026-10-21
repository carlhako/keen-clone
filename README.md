# keen-clone: Commander Keen 1 for Linux (SDL2)

A native C/SDL2 reimplementation of *Commander Keen in Invasion of the Vorticons,
Episode One: Marooned on Mars* (id Software / Apogee, 1990). It was rebuilt from the
original `KEEN1.EXE` with [REA](https://github.com/morluto/rea) and Ghidra, translating
the decompiled game logic function by function: Keen's physics, enemies, tile
behaviour, world map, menus, ending and high scores.

**No game data is included.** The port loads the original data files (graphics,
levels, sounds, texts, and data tables read from `KEEN1.EXE`), so you need your own
copy of Keen 1. The free shareware episode (v1.31) works, as does v1.1; the version
is detected automatically.

## Building

You need a C compiler, `make` and the SDL2 development files
(Debian/Ubuntu: `sudo apt install build-essential libsdl2-dev`).

```
make                       # builds ./keen1 (finds SDL2 via sdl2-config / pkg-config)
make SDL2_DIR=/some/sdl2   # or: headers in include/SDL2, library in lib/
```

## Running

Put the Keen 1 files (`KEEN1.EXE`, `EGAHEAD.CK1`, `EGALATCH.CK1`, `EGASPRIT.CK1`,
`LEVEL*.CK1`, `SOUNDS.CK1`, ...) in a directory, then:

```
./keen1 --data /path/to/keen1      # or set $KEEN1_DATA, or run from that directory
./keen1 --fullscreen --scale 4
./keen1 --level 5                  # jump straight into a level, like KEEN1 /LEVEL05
```

The game also looks in `data/` next to the binary. High scores, saves and key
settings are written back to the data directory, as the original does.

If you only have the shareware installer (`1keen.zip` containing `CK1SW131.SHR`),
`tools/unshr.py` extracts it. `make dist` packages the binary, a `run.sh` launcher and
the data from a game zip (`make dist GAMEZIP=/path/to/keen1.zip`) into
`keen1-linux-x86_64.tar.gz`.

## Web build

`make web` builds the port for the browser with [Emscripten](https://emscripten.org)
into `build/web/` (`index.html`, `.js`, `.wasm` and `.data`). It bundles the
shareware episode from `shareware/data` (extract it with `tools/unshr.py`, or point
`WEB_DATA=dir` at the v1.31 shareware files; don't bundle a registered episode).

```
git clone https://github.com/emscripten-core/emsdk.git ~/tools/emsdk
~/tools/emsdk/emsdk install latest && ~/tools/emsdk/emsdk activate latest
source ~/tools/emsdk/emsdk_env.sh
make web
python3 -m http.server 8137 --directory build/web    # then open http://localhost:8137
```

The page needs to be served over HTTP (opening `index.html` as a file doesn't work).
Click or press a key to start, since browsers only allow sound after a user gesture.
High scores, key settings and saved games are kept in the browser's IndexedDB.
Browser shortcuts the page can't intercept, like Ctrl+W, still apply: redefine the
keys with F3 if Ctrl gets in the way.

The game keeps its DOS-style blocking loops: the build uses `-sASYNCIFY`, and
`plat_vsync()` yields to the browser with `emscripten_sleep()` every frame. The
browser-specific code is behind `#ifdef __EMSCRIPTEN__` in `src/`, plus the page and
storage glue in `web/shell.html` and `web/pre.js`.

## Controls

| Key | Action |
|-----|--------|
| Arrows | move / select |
| Ctrl | jump |
| Alt | pogo stick (once found) |
| Ctrl + Alt | fire the raygun |
| Space | status screen |
| F1 help, F2 sound, F3 redefine keys, F5 save (on the world map) | |
| Esc | quit |
| Alt + Enter | toggle fullscreen |

The original cheats work too: C+T+Space gives items, G+O+D toggles god mode.

## Repository layout

- `web/` the browser page (`shell.html`) and IndexedDB glue (`pre.js`) for `make web`.
- `src/` the port: `engine.c` (objects, collision, Keen), `actors.c` (enemies, doors,
  bridges), `menus.c` (title, map, ending, scores), `ui.c` (windows, text, status),
  `gfx.c` (LZW graphics), `kdata.c` (data from the EXE, version detection) and
  `platform.c` (SDL2 video, keyboard, PC-speaker sound at the original 145.6 Hz).
- `analysis/` reverse engineering output: `NOTES.md` (file formats, addresses,
  findings), the Ghidra decompilation of all 388 functions (`keen1_decomp.c`, cleaned
  and annotated as `keen1_clean.c` / `keen1_annot.c`), the disassembly (`code.dis`),
  the call graph and the raw REA output (`rea_evidence.tar.xz`).
- `tools/` the scripts used: LZEXE unpacker, REA/Ghidra MCP driver and dump scripts,
  decompilation cleanup, graphics dumper, shareware installer extractor.

Commander Keen is a trademark of id Software. This project is an unofficial fan
reimplementation and is not affiliated with id Software or Apogee.
