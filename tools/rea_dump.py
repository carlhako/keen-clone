#!/usr/bin/env python3
"""Dump every procedure of a DOS binary via REA/Ghidra into analysis/decomp/.

Usage: rea_dump.py /abs/path/binary.exe outdir
"""
import json
import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from rea_mcp import Rea  # noqa: E402


def main():
    target, out = sys.argv[1], sys.argv[2]
    os.makedirs(os.path.join(out, "decomp"), exist_ok=True)
    r = Rea()
    t0 = time.time()
    ob = r.call("open_binary", path=target, provider_id="ghidra")
    json.dump(ob, open(os.path.join(out, "open_binary.json"), "w"), indent=1)
    procs = r.call("list_procedures")
    json.dump(procs, open(os.path.join(out, "procedures.json"), "w"), indent=1)
    strs = r.call("list_strings")
    json.dump(strs, open(os.path.join(out, "strings.json"), "w"), indent=1)
    print("opened in %.1fs" % (time.time() - t0), flush=True)

    items = procs.get("normalized_result", procs) if isinstance(procs, dict) else procs
    for key in ("procedures", "items", "results"):
        if isinstance(items, dict) and key in items:
            items = items[key]
    if isinstance(items, dict):
        items = list(items.items())
    print("procedures:", len(items), flush=True)

    for i, p in enumerate(items):
        if isinstance(p, (list, tuple)):
            addr = p[0]
        elif isinstance(p, dict):
            addr = p.get("address") or p.get("entry") or p.get("start")
        else:
            addr = str(p)
        path = os.path.join(out, "decomp", "%s.json" % addr)
        if os.path.exists(path):
            continue
        try:
            res = r.call("analyze_function", procedure=addr)
        except Exception as e:  # keep going on individual failures
            res = {"error": str(e)}
        json.dump(res, open(path, "w"), indent=1)
        if i % 25 == 0:
            print(i, addr, "%.0fs" % (time.time() - t0), flush=True)
    r.close()


if __name__ == "__main__":
    main()
