#!/usr/bin/env python3
"""Decode Keen 1 EGA graphics into PNG sheets for verification. Usage: gfxdump.py gamedir outdir"""
import struct, sys, zlib, os

EGA = [(0,0,0),(0,0,170),(0,170,0),(0,170,170),(170,0,0),(170,0,170),(170,85,0),(170,170,170),
       (85,85,85),(85,85,255),(85,255,85),(85,255,255),(255,85,85),(255,85,255),(255,255,85),(255,255,255)]

def lzw(d):
    n = struct.unpack_from('<I', d, 0)[0]
    bits = nb = 0; p = 6; w = 9; dic = {}; nxt = 258; out = bytearray(); prev = None
    while True:
        while nb < w:
            bits = (bits << 8) | d[p]; p += 1; nb += 8
        c = (bits >> (nb - w)) & ((1 << w) - 1); nb -= w
        if c == 257: break
        e = bytes([c]) if c < 256 else dic[c] if c in dic else prev + prev[:1]
        if prev is not None and nxt < 4096:
            dic[nxt] = prev + e[:1]; nxt += 1
        out += e; prev = e
        if nxt + 1 >= (1 << w) and w < 12: w += 1
    return bytes(out[:n])

def png(path, w, h, px):
    raw = b''.join(b'\0' + bytes(c for x in range(w) for c in px[y*w+x]) for y in range(h))
    def chunk(t, b): return struct.pack('>I', len(b)) + t + b + struct.pack('>I', zlib.crc32(t + b))
    open(path, 'wb').write(b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 2, 0, 0, 0))
                           + chunk(b'IDAT', zlib.compress(raw)) + chunk(b'IEND', b''))

def planar(planes, psize, off, wbytes, h, x, y, masked=False):
    out = []
    for yy in range(h):
        for xb in range(wbytes):
            o = off + yy * wbytes + xb
            b = [planes[i * psize + o] for i in range(5 if masked else 4)]
            for bit in range(8):
                m = 0x80 >> bit
                c = sum(1 << i for i in range(4) if b[i] & m)
                out.append((x + xb * 8 + bit, y + yy, c, (b[4] & m) if masked else 0))
    return out

g, outd = sys.argv[1], sys.argv[2]
hd = open(os.path.join(g, 'egahead.ck1'), 'rb').read()
(lps, sps, obt, ost, n8, o8, n32, o32, n16, o16, nb, ob, ns, os_, comp) = struct.unpack_from('<IIIIHIHIHIHIHIH', hd, 0)
latch = open(os.path.join(g, 'egalatch.ck1'), 'rb').read()
sprit = open(os.path.join(g, 'egasprit.ck1'), 'rb').read()
if comp & 2: latch = lzw(latch)
if comp & 1: sprit = lzw(sprit)
print(len(latch), len(sprit))
# tiles: 13 per row
cols = 13; rows = (n16 + cols - 1) // cols
W, H = cols * 16, rows * 16
img = [(255, 0, 255)] * (W * H)
for t in range(n16):
    for (x, y, c, _) in planar(latch, lps, o16 + t * 32, 2, 16, (t % cols) * 16, (t // cols) * 16):
        img[y * W + x] = EGA[c]
png(os.path.join(outd, 'tiles.png'), W, H, img)
# sprites
W, H = 640, 480; img = [(255, 0, 255)] * (W * H); cx = cy = rh = 0
for i in range(ns):
    w, h, lo, loc = struct.unpack_from('<HHHH', hd, ost + 128 * i)
    if cx + w * 8 > W: cx = 0; cy += rh + 2; rh = 0
    for (x, y, c, m) in planar(sprit, sps, loc * 16 + lo, w, h, cx, cy, True):
        if y < H and not m: img[y * W + x] = EGA[c]
    cx += w * 8 + 2; rh = max(rh, h)
png(os.path.join(outd, 'sprites.png'), W, H, img)
# bitmaps
W, H = 320, 560; img = [(40, 40, 40)] * (W * H); cy = 0; cx = 0; rh = 0
for i in range(nb):
    w, h, loc = struct.unpack_from('<HHI', hd, obt + 16 * i)
    if cx + w * 8 > W: cx = 0; cy += rh + 2; rh = 0
    for (x, y, c, _) in planar(latch, lps, ob + loc, w, h, cx, cy):
        if y < H: img[y * W + x] = EGA[c]
    cx += w * 8 + 2; rh = max(rh, h)
png(os.path.join(outd, 'bitmaps.png'), W, H, img)
# font
W, H = 256, 64; img = [(0, 0, 0)] * (W * H)
for t in range(n8):
    for (x, y, c, _) in planar(latch, lps, o8 + t * 8, 1, 8, (t % 32) * 8, (t // 32) * 8):
        img[y * W + x] = EGA[c]
png(os.path.join(outd, 'font.png'), W, H, img)
