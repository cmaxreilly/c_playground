CC=gcc
DEPS = stack.h precedence.h
OBJ = main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< 

calc: $(OBJ)
	$(CC) -o $@ $^ 
