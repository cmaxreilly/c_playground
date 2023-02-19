#include <stdio.h>
/* Show the contents of memory before and after the execution of the programn lines shown in Exercise 1 */
int main () {
	int n, m;
	printf("Enter two integers> \n");
	scanf("%d%d", &m, &n);
	printf("Your original integers are: %d and %d\n", m, n);
	m = m + 5;
	n = 3 * n;
	printf("After operations: \nm = %d\nn = %d\n", m, n);
	return(0);
}
