#include <stdio.h>

/* a program that counts whitespace, digits, and characters */
int main(){
	/* Initialize an integer counter for things?
	 * iterator for list comprehension and final print statement
	 * number of white space characters
	 * number of other characters */
	int c, i, nwhite, nother;
	/* Initialize ten digit array */
	int ndigit[10];

	/* Set number of white and number of other characters to zero */

	nwhite = nother = 0;

	/* Set number of each digit to zero */

	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf("\ndigits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
}


