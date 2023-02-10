#include <stdio.h>

/* copy input to output minus double spaces */

int main(){
	int c, b;

	b = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ' && b == 0)
			putchar(c);
			b = 1;
		if (c == ' ' && b == 1)
			b = 1;
		else
			putchar(c);
			b = 0;

}
