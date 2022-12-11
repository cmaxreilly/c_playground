#include <stdio.h>

/* Counts characters of an input */

int main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
		printf("%ld\n", nc);
}
