/* A small exercise from page 75 on variable display. */


#include <stdio.h>

int main (void) {
	int a; 
	double b, c;
	a = 504;
	b = 302.558;
	c = -12.31;
	printf("%5d%10.2f%8.1f\n", a, b, c);
	return 0;
}


