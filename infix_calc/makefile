bin/output: $(wildcard src/*.c) $(wildcard include/*.h)
	gcc -o bin/output $(wildcard src/*.c) -Iinclude -lm

run: src/main.c src/functions.c include/functions.h
	gcc -o bin/output src/main.c src/functions.c -Iinclude -lm; bin/output

test: src/test.c src/functions.c include/
	gcc -o test/test src/test.c src/functions.c -Iinclude -lm; test/test

debug:
	gcc -g -o bin/output src/main.c src/functions.c -Iinclude -lm

clean:
	rm -r output.dSYM/

dev: src/dev.c src/functions.c include/
	gcc -o dev/dev src/dev.c src/functions.c -Iinclude -lm; dev/dev


