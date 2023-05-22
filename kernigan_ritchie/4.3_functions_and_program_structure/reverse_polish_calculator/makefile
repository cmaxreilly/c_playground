CC=gcc
CFLAGS=-I.
DEPS = reverse_polish.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

rev_polish: main.c
	$(CC) -o rev_polish main.c
