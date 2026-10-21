#!/usr/bin/env python3
"""Unpack an LZEXE 0.90/0.91 compressed DOS MZ executable.

Port of the classic UNLZEXE algorithm. Usage: unlzexe.py in.exe out.exe
"""
import struct
import sys


class Bits:
    def __init__(self, data, pos):
        self.d = data
        self.pos = pos
        self.buf = self._word()
        self.count = 16

    def _word(self):
        w = self.d[self.pos] | (self.d[self.pos + 1] << 8)
        self.pos += 2
        return w

    def byte(self):
        b = self.d[self.pos]
        self.pos += 1
        return b

    def bit(self):
        b = self.buf & 1
        self.count -= 1
        if self.count == 0:
            self.buf = self._word()
            self.count = 16
        else:
            self.buf >>= 1
        return b


def read_relocs(d):
    ih = list(struct.unpack_from("<16H", d, 0))
    sig = d[0x1C:0x20]
    if ih[0] != 0x5A4D or sig not in (b"LZ09", b"LZ91"):
        raise SystemExit("not an LZEXE 0.90/0.91 file")
    ver = 90 if sig == b"LZ09" else 91
    stub = (ih[0x0B] + ih[4]) << 4  # CS:0000 of the decompressor
    relocs = []
    if ver == 91:
        p = stub + 0x158
        off = seg = 0
        while True:
            span = d[p]; p += 1
            if span == 0:
                span = d[p] | (d[p + 1] << 8); p += 2
                if span == 0:
                    seg += 0x0FFF
                    continue
                if span == 1:
                    break
            off += span
            seg += (off & ~0x0F) >> 4
            off &= 0x0F
            relocs.append((off, seg))
    else:
        p = stub + 0x19D
        seg = 0
        while True:
            n = d[p] | (d[p + 1] << 8); p += 2
            for _ in range(n):
                o = d[p] | (d[p + 1] << 8); p += 2
                relocs.append((o, seg))
            if seg >= 0xF000:
                break
            seg += 0x1000
    return relocs


def build_header(d, image_len):
    """MZ header + relocation table for an unpacked image of image_len bytes."""
    ih = list(struct.unpack_from("<16H", d, 0))
    inf = struct.unpack_from("<8H", d, (ih[0x0B] + ih[4]) << 4)
    relocs = read_relocs(d)
    hdr = bytearray(0x1C)
    rel = b"".join(struct.pack("<HH", o, s) for o, s in relocs)
    hsize = 0x1C + len(rel)
    hsize += (0x200 - hsize) & 0x1FF
    total = hsize + image_len
    oh = ih[:14]
    oh[0] = 0x5A4D
    oh[1] = total & 0x1FF
    oh[2] = (total + 0x1FF) >> 9
    oh[3] = len(relocs)
    oh[4] = hsize >> 4
    oh[7], oh[8] = inf[3], inf[2]  # SS, SP
    oh[9] = 0
    oh[10], oh[11] = inf[0], inf[1]  # IP, CS
    oh[12] = 0x1C
    oh[13] = 0
    if ih[6] != 0:
        oh[5] = (ih[5] - (inf[5] + ((inf[6] + 15) >> 4) + 9)) & 0xFFFF
        if ih[6] != 0xFFFF:
            oh[6] = (ih[6] - (ih[5] - oh[5])) & 0xFFFF
    struct.pack_into("<14H", hdr, 0, *oh)
    image = hdr + rel
    image += b"\0" * (hsize - len(image))
    return bytes(image), len(relocs)


def unpack(d):
    ih = list(struct.unpack_from("<16H", d, 0))
    inf = struct.unpack_from("<8H", d, (ih[0x0B] + ih[4]) << 4)
    # Load module
    src = (ih[0x0B] - inf[4] + ih[4]) << 4
    bs = Bits(d, src)
    out = bytearray()
    while True:
        if bs.bit():
            out.append(bs.byte())
            continue
        if not bs.bit():
            ln = (bs.bit() << 1) | bs.bit()
            ln += 2
            span = bs.byte() - 0x100
        else:
            lo = bs.byte()
            hi = bs.byte()
            span = (lo | ((hi & ~0x07) << 5) | 0xE000) - 0x10000
            ln = (hi & 0x07) + 2
            if ln == 2:
                ln = bs.byte()
                if ln == 0:
                    break
                if ln == 1:
                    continue
                ln += 1
        for _ in range(ln):
            out.append(out[len(out) + span])

    hdr, nrel = build_header(d, len(out))
    return hdr + bytes(out), nrel


def main():
    if len(sys.argv) != 3:
        raise SystemExit(__doc__)
    data = open(sys.argv[1], "rb").read()
    result, nrel = unpack(data)
    open(sys.argv[2], "wb").write(result)
    print(f"unpacked {len(data)} -> {len(result)} bytes, {nrel} relocations")


if __name__ == "__main__":
    main()
