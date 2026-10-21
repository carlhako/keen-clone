# Commander Keen 1 for Linux (SDL2)
#
#   make            build ./keen1
#   make dist       build and package keen1-linux-x86_64.tar.gz with the game data
#
# SDL2 is found with sdl2-config / pkg-config. Without development packages,
# point SDL2_DIR at a directory containing include/SDL2/*.h and lib/libSDL2.so.

CC      ?= cc
CFLAGS  ?= -O2 -g
CFLAGS  += -std=gnu11 -Wall -Wextra -Wno-unused-parameter
SRC     := $(wildcard src/*.c)
OBJ     := $(SRC:src/%.c=build/%.o)
GAMEZIP ?= Commander Keen 1 Marooned On Mars (1990)(Apogee Software).zip

ifdef SDL2_DIR
  SDL_CFLAGS := -I$(SDL2_DIR)/include
  SDL_LIBS   := -L$(SDL2_DIR)/lib -Wl,-rpath-link,$(SDL2_DIR)/lib -lSDL2
else
  SDL_CFLAGS := $(shell sdl2-config --cflags 2>/dev/null || pkg-config --cflags sdl2)
  SDL_LIBS   := $(shell sdl2-config --libs 2>/dev/null || pkg-config --libs sdl2)
endif

keen1: $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $(OBJ) $(SDL_LIBS) -lm

build/%.o: src/%.c src/*.h | build
	$(CC) $(CFLAGS) $(SDL_CFLAGS) -c -o $@ $<

build:
	mkdir -p build

DIST := keen1-linux-x86_64
dist: keen1
	rm -rf $(DIST) $(DIST).tar.gz
	mkdir -p $(DIST)/data
	cp keen1 $(DIST)/
	# Game data: the clean v1.31 shareware files when extracted (tools/unshr.py),
	# otherwise the bundled zip; saves, scores and key settings come from the zip.
	unzip -q -o "$(GAMEZIP)" -d $(DIST)/data
	if [ -d shareware/data ]; then \
		for f in shareware/data/*; do \
			rm -f "$(DIST)/data/$$(basename "$$f" | tr A-Z a-z)"; cp "$$f" $(DIST)/data/; \
		done; \
	fi
	cp README.md $(DIST)/
	cp packaging/keen1.sh $(DIST)/run.sh
	chmod +x $(DIST)/run.sh
	tar czf $(DIST).tar.gz $(DIST)

clean:
	rm -rf build keen1 $(DIST) $(DIST).tar.gz

.PHONY: dist clean
