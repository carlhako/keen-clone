#!/usr/bin/env python3
"""Side-by-side diff of a v1.1 function against its v1.31 counterpart.
Usage: vdiff.py V11_START V11_END  (v1.31 range found by alignment)"""
import re, sys, difflib
def load(p):
    out = []
    for l in open(p):
        m = re.match(r'\s*([0-9a-f]+):\t(?:[0-9a-f ]+)\t(.*)', l)
        if m: out.append((int(m.group(1), 16), re.sub(r'\s+', ' ', m.group(2)).strip()))
    return out
a = load('analysis/code.dis'); b = load('shareware/code131.dis')
s, e = int(sys.argv[1], 16), int(sys.argv[2], 16)
sm = difflib.SequenceMatcher(None, [x[1].split(' ')[0] for x in a], [x[1].split(' ')[0] for x in b], autojunk=False)
amap = {}
for blk in sm.get_matching_blocks():
    for k in range(blk.size): amap[blk.a + k] = blk.b + k
ia = [i for i, x in enumerate(a) if s <= x[0] < e]
jb = [amap[i] for i in ia if i in amap]
j0, j1 = min(jb), max(jb) + 1
norm = lambda t: re.sub(r'0x[0-9a-f]{3,}', 'N', t)
A = [norm(x[1]) for x in a[ia[0]:ia[-1] + 1]]
B = [norm(x[1]) for x in b[j0:j1]]
print('v1.31 range %05x-%05x' % (b[j0][0], b[j1 - 1][0]))
for l in difflib.unified_diff(A, B, 'v1.1', 'v1.31', n=3, lineterm=''):
    print(l)
