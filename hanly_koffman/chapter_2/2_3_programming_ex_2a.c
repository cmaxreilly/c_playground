#include <stdio.h>

/* Exercise 2a: Write a statement that displays the following line with the value of the type double 
 * variable x at the end.
 * "The value of x is ________" */
int main (){
	double x;
	printf("Enter a floating point number for x\n");
	scanf("%lf", &x);
	printf("The value of x is %f.\n", x);
	return(0);
}
