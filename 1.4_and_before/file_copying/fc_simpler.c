#include<stdio.h>

/* copyin input to output: 2nd version */

int main()
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}

