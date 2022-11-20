#include <stdio.h>

/* Assignment: Write a program to print a histogram of the lengths of words in its input.
 * It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging */
int main(){
	/* Initialize an integer counter for things?
	 * iterator for list comprehension and final print statement */

	int c, i;


/* I need to modify this to create a list of letters for each word, and then print an '*' to the std followed by a 
 * newline character */
	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\n' || c == '\t' )
			printf("\n");
		else if (c == ',' || c =='.' || c =='!' || c == '?')
			printf(" ");

		else
			printf("*");
}


