#!/usr/bin/env python3
"""Unpack an LZEXE file by emulating its own decompressor stub (unicorn, 16-bit real mode).

Usage: emu_unlzexe.py packed.exe out.exe
Needs: pip install unicorn (run with the ~/tools/venv interpreter).
The stub is stopped right after decompression (before it applies relocations),
the image is read back and a normal MZ file is written using the stub's
relocation table (same format as tools/unlzexe.py).
"""
import struct
import sys

from unicorn import Uc, UC_ARCH_X86, UC_MODE_16, UC_HOOK_CODE
from unicorn.x86_const import (UC_X86_REG_CS, UC_X86_REG_DS, UC_X86_REG_ES,
                               UC_X86_REG_SS, UC_X86_REG_SP, UC_X86_REG_IP,
                               UC_X86_REG_DI)

sys.path.insert(0, __import__('os').path.dirname(__file__))
import unlzexe  # noqa: E402  (reuse relocation table parsing / header writer)

PSP = 0x0FF0
LOAD = 0x1000


def main():
    data = open(sys.argv[1], 'rb').read()
    ih = list(struct.unpack_from('<16H', data, 0))
    hdr = ih[4] * 16
    image = data[hdr:]
    stub_off = ih[0x0B] * 16
    inf = struct.unpack_from('<8H', image, stub_off)

    mu = Uc(UC_ARCH_X86, UC_MODE_16)
    mu.mem_map(0, 0x100000)
    mu.mem_write(LOAD * 16, image)
    for reg, val in ((UC_X86_REG_DS, PSP), (UC_X86_REG_ES, PSP),
                     (UC_X86_REG_SS, LOAD + ih[7]), (UC_X86_REG_SP, ih[8]),
                     (UC_X86_REG_CS, LOAD + ih[0x0B])):
        mu.reg_write(reg, val)

    # After the self-move the stub runs at CS = LOAD + CS0 + inf[5]; stop at
    # its "end of compressed data" branch target (offset 0xfc).
    new_cs = LOAD + ih[0x0B] + inf[5]
    stop = new_cs * 16 + 0xFC
    state = {}

    def hook(uc, address, size, user):
        if address == stop:
            state['es'] = uc.reg_read(UC_X86_REG_ES)
            state['di'] = uc.reg_read(UC_X86_REG_DI)
            uc.emu_stop()

    mu.hook_add(UC_HOOK_CODE, hook)
    mu.emu_start(LOAD * 16 + ih[0x0B] * 16 + ih[0x0A], 0xFFFFF, count=200_000_000)
    end = state['es'] * 16 + state['di']
    out = bytes(mu.mem_read(LOAD * 16, end - LOAD * 16))
    print('emulated image size', len(out))

    # Build an MZ from the emulated image + the stub's relocation table.
    hdr_bytes, nrel = unlzexe.build_header(data, len(out))
    open(sys.argv[2], 'wb').write(hdr_bytes + out)
    print('wrote', sys.argv[2], nrel, 'relocations')


if __name__ == '__main__':
    main()
