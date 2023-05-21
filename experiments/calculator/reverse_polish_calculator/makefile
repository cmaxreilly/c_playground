CC=gcc
CFLAGS=-I.
DEPS = ../stack.h
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

reverse_polish: reverse_polish_calculator.c
	$(CC) -o reverse_polish reverse_polish_calculator.c

