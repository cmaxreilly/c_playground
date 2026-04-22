CFLAGS  := -std=c99 -Wall $(shell pkg-config --cflags gtk+-3.0)
LDFLAGS := $(shell pkg-config --libs gtk+-3.0)

output: src/main.c
	clang $(CFLAGS) $< -o $@ $(LDFLAGS)

