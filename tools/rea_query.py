#!/usr/bin/env python3
"""Run several REA MCP tool calls against one binary in a single Ghidra session.

Usage: rea_query.py /abs/binary.exe 'tool {"arg": 1}' ['tool2 {...}' ...]
Prints each normalized result as JSON.
"""
import json
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from rea_mcp import Rea  # noqa: E402


def main():
    r = Rea()
    r.call("open_binary", path=sys.argv[1], provider_id="ghidra")
    for spec in sys.argv[2:]:
        name, _, args = spec.partition(" ")
        res = r.call(name, **(json.loads(args) if args.strip() else {}))
        if isinstance(res, dict) and "normalized_result" in res:
            res = res["normalized_result"]
        print("=== %s" % spec)
        print(json.dumps(res, indent=1)[:200000])
    r.close()


if __name__ == "__main__":
    main()
