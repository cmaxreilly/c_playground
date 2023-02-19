#include <stdio.h>

int main () {
	int n, m;
	printf("Enter two integers> ");
	scanf("%d%d", &m, &n);
	m = m + 5;
	n = 3 * n;
	printf("m = %d\nn = %d\n", m, n);
	return(0);
}
