bin/output: src/main.c src/stack.c include/stack.h include/reverse_polish.h
	gcc -o bin/output src/main.c src/stack.c -Iinclude -lm

run: src/main.c src/stack.c include/stack.h
	gcc -o bin/output src/main.c src/stack.c -Iinclude -lm; bin/output

test: src/test.c src/stack.c include/
	gcc -o test/test src/test.c src/stack.c -Iinclude -lm; test/test

debug:
	gcc -g -o bin/output src/main.c src/stack.c -Iinclude -lm

clean:
	rm -r output.dSYM/

