calc: main.o precedence.o stack.o
	gcc -o calc main.o stack.o precedence.o

main.o: main.c precedence.h stack.h
	gcc -c main.c

stack.o: stack.c stack.h
	gcc -c stack.c

precedence.o: precedence.c precedence.h
	gcc -c precedence.c
