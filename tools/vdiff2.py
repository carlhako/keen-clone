#!/usr/bin/env python3
"""Show changed hunks (with addresses) between v1.1 and v1.31 for a v1.1 range."""
import re, sys, difflib
def load(p):
    out = []
    for l in open(p):
        m = re.match(r'\s*([0-9a-f]+):\t(?:[0-9a-f ]+)\t(.*)', l)
        if m: out.append((int(m.group(1), 16), re.sub(r'\s+', ' ', m.group(2))))
    return out
a = load('analysis/code.dis'); b = load('shareware/code131.dis')
norm = lambda t: re.sub(r'0x[0-9a-f]{3,}', 'N', t)
sm = difflib.SequenceMatcher(None, [x[1].split(' ')[0] for x in a], [x[1].split(' ')[0] for x in b], autojunk=False)
amap = {}
for blk in sm.get_matching_blocks():
    for k in range(blk.size): amap[blk.a + k] = blk.b + k
s, e = int(sys.argv[1], 16), int(sys.argv[2], 16)
ia = [i for i, x in enumerate(a) if s <= x[0] < e]
jb = [amap[i] for i in ia if i in amap]
A = a[ia[0]:ia[-1] + 1]; B = b[min(jb):max(jb) + 1]
sm2 = difflib.SequenceMatcher(None, [norm(x[1]) for x in A], [norm(x[1]) for x in B], autojunk=False)
for tag, i1, i2, j1, j2 in sm2.get_opcodes():
    if tag == 'equal': continue
    print('----', tag)
    for x in A[i1:i2]: print('  v11  %05x %s' % x)
    for x in B[j1:j2]: print('  v131 %05x %s' % x)
