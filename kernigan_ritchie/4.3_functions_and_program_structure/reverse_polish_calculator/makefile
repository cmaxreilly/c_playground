CC=gcc
CFLAGS=-I.
DEPS = include/reverse_polish.h

bin/%.o: src/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bin/rev_polish: src/main.c
	$(CC) -o bin/rev_polish src/main.c
