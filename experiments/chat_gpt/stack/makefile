CC=gcc
CFLAGS=-I.
DEPS = stack.h
OBJ = main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

stack: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
