#!/bin/sh
# dis.sh START END  (linear addresses, e.g. 0x13c05 0x13f51)
objdump -D -b binary -mi8086 -M intel --adjust-vma=0x10000 --start-address=$1 --stop-address=$2 "$(dirname "$0")/../analysis/code.bin" | tail -n +8 | sed -E 's/^ +//; s/\t[0-9a-f ]+\t/\t/'
