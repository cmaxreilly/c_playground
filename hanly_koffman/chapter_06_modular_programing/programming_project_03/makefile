bin/output: src/main.c src/functions.c include/functions.h
	gcc -o bin/output src/main.c src/functions.c -Iinclude -lm

debug:
	gcc -g -o output main.c -I. -lm

clean:
	rm -r output.dSYM/

