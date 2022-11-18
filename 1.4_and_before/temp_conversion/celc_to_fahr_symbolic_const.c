#include <stdio.h>

#define LOWER  -40 /* Defines lower boundary of table */ 
#define UPPER  500 /* Defines upper boundary of table */
#define STEP  20   /* Defines size of table steps */


/* Prints header and table */


int main()
{ 
	printf("A table of temperatures\n");
	printf("Fahrenheit   Celcius\n");
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (fahr - 32) * (5.0/9.0));
}

