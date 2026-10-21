#!/usr/bin/env python3
"""Rewrite Ghidra's mis-typed DS string labels into plain DS offsets: g_XXXX."""
import re, sys
s = open(sys.argv[1]).read()
def h(x): return int(x, 16)
# *(T *)((char *)s_NAME_2315_XXXX + K + expr)  -> keep expr, fold K
s = re.sub(r'\(char \*\)s_\w+?_2315_([0-9a-f]{4}) \+ (0x[0-9a-f]+|\d+)',
           lambda m: '(char *)0x%04x' % (h(m.group(1)) + int(m.group(2), 0)), s)
s = re.sub(r'\(char \*\)s_\w+?_2315_([0-9a-f]{4})', lambda m: '(char *)0x%04x' % h(m.group(1)), s)
# s_NAME_2315_XXXX._K_N_  -> g_(XXXX+K)
s = re.sub(r's_\w+?_2315_([0-9a-f]{4})\._(\d+)_(\d+)_',
           lambda m: 'g_%04x' % (h(m.group(1)) + int(m.group(2))), s)
# s_NAME_2315_XXXX[K]  -> gb_(XXXX+K)
s = re.sub(r's_\w+?_2315_([0-9a-f]{4})\[(0x[0-9a-f]+|\d+)\]',
           lambda m: 'gb_%04x' % (h(m.group(1)) + int(m.group(2), 0)), s)
s = re.sub(r's_\w+?_2315_([0-9a-f]{4})', lambda m: 'g_%s' % m.group(1), s)
s = re.sub(r'DAT_2315_([0-9a-f]{4})', r'g_\1', s)
s = re.sub(r'\(undefined2 \*\)&g_([0-9a-f]{4})\)\[', r'(int*)&g_\1)[', s)
open(sys.argv[2], 'w').write(s)
