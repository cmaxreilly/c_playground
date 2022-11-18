#include <stdio.h>

/* A program that copies a test file and prints it to the command line */

int c;

int main()
{
	c = getchar();
	while(c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
			
		
