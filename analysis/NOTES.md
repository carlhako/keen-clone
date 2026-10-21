# Reverse engineering notes: KEEN1.EXE v1.1

How the Linux port was derived from the original DOS executable.

## Tooling

- **REA** (`rea-agents` 6.7.0, github.com/morluto/rea) driving **Ghidra 12.1.4** (JDK 21),
  run as an MCP stdio server (`tools/rea_mcp.py`) so one Ghidra session served every query.
- `tools/rea_dump.py` decompiled all 388 recovered procedures into `decomp/*.json`
  (archived in `rea_evidence.tar.xz`; extract it here for `tools/show.py ADDR asm`);
  `keen1_decomp.c` is the combined pseudocode, `code.dis` the full objdump listing.
- Ghidra assumed DS = 0x2315 but labelled strings at the wrong addresses, so
  `tools/clean_decomp.py` rewrites the labels as plain DS offsets (`g_XXXX`) and
  `tools/annotate.py` adds the string each constant points to → `keen1_annot.c`.
- Register-passed Borland helpers (shift counts, struct copy sizes) are invisible in
  the pseudocode, so `tools/show.py ADDR asm` and `tools/dis.sh` (objdump) were used
  for exact constants. Helpers: `e251` long shift left, `e272` arithmetic right,
  `e292` logical right, `e1a3`/`e1b2` long div/mod, `e663` long multiply,
  `e39b` struct copy, `e33b`/`e2b3` huge pointer add.

## Executable

- LZEXE 0.91 compressed (`tools/unlzexe.py`; `tools/emu_unlzexe.py` runs the real stub
  under unicorn). Turbo C++ 1990, medium model, timer reprogrammed to 1193182/8192 Hz.
- **This copy is damaged.** Unpacking yields 108,210 bytes where LZEXE's header implies
  about 100,000. The hand-written graphics module (CODE_1) contains garbled code, and
  everything after it is 0x2100 bytes late. Emulating the decompressor stub reproduces this,
  and the in-place decompression then overruns its own input. The C code segment and the
  data tables are intact: DGROUP starts at the Turbo C copyright string ("Turbo C++ ..."
  at DS:0004). The port finds DS by that string and only reads data from the EXE.
- `LEVEL16.CK1` is damaged as well: 28 tile values ≥ 611, broken 0xFEFE run markers,
  and 22 words short of its declared size.

## Data formats

| File | Format |
|------|--------|
| EGAHEAD | plane sizes, table offsets; 256 8x8 font, 611 16x16 tiles, 18 bitmaps, 119 sprites (4 shift entries of 32 bytes each; hitbox in 1/256 px) |
| EGALATCH / EGASPRIT | LZW: 4 byte length + 2 bytes, MSB-first 9..12 bit codes, dictionary from 258, 257 = end. 4 planes (sprites: + mask) |
| LEVELnn | RLEW (0xFEFE count value), header 16 words, tile plane, info plane |
| SOUNDS | "SND\0", 16 byte entries (offset, priority, rate, name), PIT divisors, 0xFFFF ends; one step per timer tick |
| FINALE, PREVIEW2/3 | 4 byte length + RLE (b<0x80: repeat next b+3; else copy b-127), 4 planes of 0x2000 bytes |
| *TEXT | CR LF text; single newline joins, `~` = highlighted line, 0x1F = forced break |
| SAVEDn | 92 bytes from DS:A5C0 (parts, pogo, keys, levels done, lives, ammo, score, map position) |
| SCORES | 204 bytes from DS:A62A |
| CTLPANEL | 44 bytes: sound, input device, joystick calibration, 8 direction scancodes, 2 buttons |

## Data segment tables (DS offsets)

| Offset | Contents |
|--------|----------|
| 00A8 | tile tables: animation, behaviour, top, right, bottom, left (6 × 611 words) |
| 1FDE | point values for item behaviours 6..10 |
| 24CC | palettes: black, dark, half, full (17 bytes each) |
| 2852 | world map teleporter destinations; 2866 the ice teleporter |
| 28F2, 292E, 29DA | ship flight paths for the ending |
| 4F86 | 256 byte random table |
| 50AE | additive random generator seed |

## Key functions

| Address | Role |
|---------|------|
| 0x0239 / 0x0289 | frame start (≥ 6 ticks, ≤ 15) / refresh |
| 0x02C5 / 0x0501 | queue sprite (+ foreground tiles) / overlay tile |
| 0x066B, 0x1656 | load level and limits, spawn actors from info plane |
| 0x2D02 | tile collision (flags 1 left, 2 floor, 4 right, 8 ceiling) |
| 0x38F0..0x4335 | Keen: walk, jump charge, air, shoot, pogo, frozen, exit, dying |
| 0x4373, 0x468D | Keen tile interactions, Keen touch handler |
| 0x19BA..0x2326 | Yorp, Garg, Vorticon, Butler, Tank, ice cannon, chain |
| 0x4C32 | level loop; 0x7DFB world map; 0x839A ending; 0x8CE4 high scores |
| 0x91F5, 0x949D | attract loop, main menu |

## v1.31 shareware

- `shareware/1keen.zip` (md5 7375d0452276388d52c35d0b3ad6ab82) contains Apogee's installer.
  `CK1SW131.SHR` entries: name at +0, compressed size at +0x88, PKWARE DCL implode data
  at +0xA8 (`tools/unshr.py`). The installer links PKWARE's DCL 1.03.
- KEEN1.EXE md5 8b2b1f335bb49e0b81ad66af582de2ef ("version 1.31 1/23/90") unpacks cleanly
  (100,484 bytes, DGROUP 0x1305). All data files equal the supplied copy except LEVEL16.CK1.
- `ds_v11_to_v131.txt`: block alignment of the two data segments, embedded in `src/kdata.c`.
- `tools/vdiff.py` / `tools/vdiff2.py` compare functions with addresses normalised. Real
  logic changes found: 0x3301 removes off-map actors, 0x4C32 always fades, the ordering page,
  an extra sound in the ending, removed /LEVEL warp, F8 screenshot and unused tile
  behaviours 27/28, and the extra-life threshold after loading a game (v1.1 forgot to
  multiply by 20000). Timer rate and frame limits are unchanged.
