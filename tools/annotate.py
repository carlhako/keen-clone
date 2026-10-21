#!/usr/bin/env python3
"""Annotate cleaned pseudocode: numeric constants that are real DS offsets of strings get /*"..."*/."""
import re, sys
exe = open(sys.argv[1], 'rb').read()
DS = 0x15450  # file offset of DGROUP (segment 0x2525 at load base 0x1000)
data = exe[DS:]
strs = {}
i = 0
while i < len(data):
    j = i
    while j < len(data) and (32 <= data[j] < 127 or data[j] in (10, 13)):
        j += 1
    if j < len(data) and data[j] == 0 and j - i >= 3:
        strs[i] = data[i:j].decode('latin1')
        i = j + 1
    else:
        i += 1
src = open(sys.argv[2]).read()
def rep(m):
    v = int(m.group(0), 16)
    if v in strs:
        t = strs[v][:40].replace('\n', '\\n').replace('*/', '* /')
        return '%s/*"%s"*/' % (m.group(0), t)
    return m.group(0)
src = re.sub(r'\b0x[0-9a-f]{3,4}\b', rep, src)
open(sys.argv[3], 'w').write(src)
with open(sys.argv[3] + '.strings', 'w') as f:
    for k in sorted(strs):
        f.write('%04x %r\n' % (k, strs[k][:100]))
