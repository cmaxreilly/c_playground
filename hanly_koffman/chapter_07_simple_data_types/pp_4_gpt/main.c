#include <stdio.h>

int main(void)
{
    long double pi = 0.0;
    int sign = 1;

    for (int i = 1; i <= 100000; i += 2) { // Only odd numbers
        printf("%d\n", i);
        printf("dividing 1 by %d and %s that to pi\n", i, (sign == 1) ? "adding" : "subtracting");

        pi += sign * (4.0 / (long double)i);
        sign = -sign; // Flip sign
    }

    printf("\nYour value for pi is: %.15Lf\n", pi);
    return 0;
}
