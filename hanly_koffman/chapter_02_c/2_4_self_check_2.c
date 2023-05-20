/*
 * Programmer: Max Reilly    Date completed: Feb 18, 2023
 * Calculate and display the difference of tow input values
 */

#include <stdio.h>

int main(void) {
	int x, y, sum; /* input variables and sum variable. */
	printf("Enter two integers\n");
	scanf("%d%d", &x, &y);
	sum = x + y;
	printf("%d + %d = %d\n", x, y, sum);
	return (0);
}


