#!/usr/bin/env python3
"""Extract Apogee installer archives (*.SHR) used by the Keen 1 shareware release.

Each entry: file name at offset 0 (zero padded), attribute/size/date fields at
+0x80 (compressed size at +0x88), PKWARE DCL "implode" data at +0xA8.
Usage: unshr.py ARCHIVE.SHR OUTDIR
"""
import os
import re
import struct
import sys

MAXBITS = 13


class Huff:
    def __init__(self, rep, n):
        length = []
        for b in rep:
            length += [b & 15] * ((b >> 4) + 1)
        assert len(length) == n
        self.count = [0] * (MAXBITS + 1)
        for l in length:
            self.count[l] += 1
        offs = [0] * (MAXBITS + 2)
        for l in range(1, MAXBITS + 1):
            offs[l + 1] = offs[l] + self.count[l]
        self.symbol = [0] * n
        for s, l in enumerate(length):
            if l:
                self.symbol[offs[l]] = s
                offs[l] += 1


LITLEN = [11, 124, 8, 7, 28, 7, 188, 13, 76, 4, 10, 8, 12, 10, 12, 10, 8, 23, 8,
          9, 7, 6, 7, 8, 7, 6, 55, 8, 23, 24, 12, 11, 7, 9, 11, 12, 6, 7, 22, 5,
          7, 24, 6, 11, 9, 6, 7, 22, 7, 11, 38, 7, 9, 8, 25, 11, 8, 11, 9, 12,
          8, 12, 5, 38, 5, 38, 5, 11, 7, 5, 6, 21, 6, 10, 53, 8, 7, 24, 10, 27,
          44, 253, 253, 253, 252, 252, 252, 13, 12, 45, 12, 45, 12, 61, 12, 45,
          44, 173]
LENLEN = [2, 35, 36, 53, 38, 23]
DISTLEN = [2, 20, 53, 230, 247, 151, 248]
BASE = [3, 2, 4, 5, 6, 7, 8, 9, 10, 12, 16, 24, 40, 72, 136, 264]
EXTRA = [0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8]
LITCODE = Huff(LITLEN, 256)
LENCODE = Huff(LENLEN, 16)
DISTCODE = Huff(DISTLEN, 64)


def explode(data):
    pos = 0
    buf = cnt = 0

    def bits(n):
        nonlocal pos, buf, cnt
        while cnt < n:
            buf |= data[pos] << cnt
            pos += 1
            cnt += 8
        v = buf & ((1 << n) - 1)
        buf >>= n
        cnt -= n
        return v

    def decode(h):
        code = first = index = 0
        for l in range(1, MAXBITS + 1):
            code |= bits(1) ^ 1
            count = h.count[l]
            if code - first < count:
                return h.symbol[index + code - first]
            index += count
            first += count
            first <<= 1
            code <<= 1
        raise ValueError('bad code')

    lit = bits(8)
    dictbits = bits(8)
    if lit > 1 or dictbits not in (4, 5, 6):
        raise ValueError('not a DCL implode stream')
    out = bytearray()
    while True:
        if bits(1):
            sym = decode(LENCODE)
            ln = BASE[sym] + bits(EXTRA[sym])
            if ln == 519:
                break
            sym = 2 if ln == 2 else dictbits
            dist = (decode(DISTCODE) << sym) + bits(sym) + 1
            for _ in range(ln):
                out.append(out[-dist])
        else:
            out.append(decode(LITCODE) if lit else bits(8))
    return bytes(out)


def main():
    arc, outdir = sys.argv[1], sys.argv[2]
    d = open(arc, 'rb').read()
    os.makedirs(outdir, exist_ok=True)
    pos = 0
    while pos + 0xa8 <= len(d):
        name = d[pos:pos + 0x80].split(b'\0')[0].decode('ascii')
        if not re.fullmatch(r'[A-Z0-9_]{1,8}\.[A-Z0-9]{1,3}', name):
            # Leading pad before the first entry.
            m = re.search(rb'[A-Z0-9_]{1,8}\.[A-Z0-9]{2,3}\x00', d[pos:])
            if not m:
                break
            pos += m.start()
            continue
        attr, _, csize, stamp = struct.unpack_from('<IIII', d, pos + 0x80)
        data = explode(d[pos + 0xa8:pos + 0xa8 + csize])
        open(os.path.join(outdir, name), 'wb').write(data)
        print('%-13s %7d -> %7d' % (name, csize, len(data)))
        pos += 0xa8 + csize


if __name__ == '__main__':
    main()
