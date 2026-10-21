#!/usr/bin/env python3
"""Show pseudocode (default) or annotated assembly ('asm') for a function address."""
import json, re, sys, os
A = os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'analysis')
HELP = {'e251': 'LSHL', 'e272': 'LSAR', 'e292': 'LSHR', 'e1a3': 'LDIV', 'e1b2': 'LMOD', 'e663': 'LMUL',
        'e39b': 'SCOPY', 'e33b': 'PADD', 'e2b3': 'PADDM'}
addr = sys.argv[1]
if not addr.startswith('0x'): addr = '0x' + addr
if len(sys.argv) > 2 and sys.argv[2] == 'asm':
    d = json.load(open(os.path.join(A, 'decomp', addr + '.json')))['normalized_result']
    for l in d['assembly']:
        m = re.search(r'CALL 0x1000:(e[0-9a-f]{3})', l)
        if m and m.group(1) in HELP: l += '    ; ' + HELP[m.group(1)]
        print(l)
else:
    src = open(os.path.join(A, 'keen1_annot.c')).read()
    i = src.find('/* ===== %s ' % addr)
    j = src.find('/* ===== ', i + 10)
    print(src[i:j])
