#include<stdio.h>
#define ITERATIONS 5000000000

int
main(void)
{
    long double pi = 0.0;
    long long i;
    int sign = 1;

    for (   i = 1;
            i <= ITERATIONS;
            i+= 2)
    {
        pi += (long double)sign * 4.0 / (long double)i;
        sign = -sign;
    }
    printf("\nYour value for pi is:   %.15Lf\n", pi);
    printf("\nActual first 15 digits: 3.14159265358979\n");
    return 0;
}
