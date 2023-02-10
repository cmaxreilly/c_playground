#include <stdio.h>

/* count characters in input; 2nd version */

int main(){
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;   /* Null statment in body of for loop to satisfy gramatical requirements, even though all of the work is already done in the test and increment parts. */
	printf("%.0f\n", nc);
}


