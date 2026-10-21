#!/bin/sh
# Launch Commander Keen 1 with the game data shipped next to this script.
here="$(cd "$(dirname "$0")" && pwd)"
exec "$here/keen1" --data "$here/data" "$@"
