#include <stdio.h>
/* Assignment: Write a statement that asks the user to type three integers and another statement that
 * stores the three user responses into first, second, and third. */

int main () {
	int first, second, third;
	printf("Please type three integers\n");
	scanf("%d%d%d", &first, &second, &third);
	printf(" Your first number was %d, your second was %d, your third was %d.\n", first, second, third);
	return(0);
}	

