#!/usr/bin/env python3
"""Minimal MCP stdio client for driving `rea --mcp` in one persistent session."""
import json
import os
import subprocess
import sys


class Rea:
    def __init__(self):
        rea = os.path.expanduser("~/tools/rea/node_modules/.bin/rea")
        self.p = subprocess.Popen([rea, "--mcp"], stdin=subprocess.PIPE,
                                  stdout=subprocess.PIPE, stderr=open(os.devnull, "w"),
                                  text=True, bufsize=1)
        self.id = 0
        self.rpc("initialize", {"protocolVersion": "2025-06-18", "capabilities": {},
                                "clientInfo": {"name": "keen-re", "version": "1"}})
        self.notify("notifications/initialized")

    def notify(self, method, params=None):
        self.p.stdin.write(json.dumps({"jsonrpc": "2.0", "method": method,
                                       "params": params or {}}) + "\n")
        self.p.stdin.flush()

    def rpc(self, method, params):
        self.id += 1
        self.p.stdin.write(json.dumps({"jsonrpc": "2.0", "id": self.id,
                                       "method": method, "params": params}) + "\n")
        self.p.stdin.flush()
        while True:
            line = self.p.stdout.readline()
            if not line:
                raise RuntimeError("rea exited")
            msg = json.loads(line)
            if msg.get("id") == self.id:
                if "error" in msg:
                    raise RuntimeError(msg["error"])
                return msg["result"]

    def tools(self):
        return self.rpc("tools/list", {})["tools"]

    def call(self, name, **args):
        r = self.rpc("tools/call", {"name": name, "arguments": args})
        if "structuredContent" in r and r["structuredContent"] is not None:
            return r["structuredContent"]
        txt = "".join(c.get("text", "") for c in r.get("content", []))
        try:
            return json.loads(txt)
        except ValueError:
            return txt

    def close(self):
        self.p.stdin.close()
        self.p.wait(timeout=60)


if __name__ == "__main__":
    r = Rea()
    for t in r.tools():
        if len(sys.argv) < 2 or t["name"] in sys.argv[1:]:
            print(t["name"], json.dumps(t["inputSchema"])[:1500])
    r.close()
