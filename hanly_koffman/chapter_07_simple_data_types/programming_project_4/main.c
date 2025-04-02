#include<stdio.h>
#define ITERATIONS 10000000

int
main(void)
{
    long double pi = 0.0;
    long long i;
    int sign = 0;

    for (   i = 1;
            i <= ITERATIONS;
            i++)
    {
        if (i % 2 == 0)
            ;
        else
        {
            printf("%lld\n", i);
            if (sign == 0)
            {
                printf("dividing 1 by %lld and adding that to multiplier\n", i);
                pi += 4.0 / (long double)i;
            }
            if (sign == 1)
            {
                printf("dividing 1 by %lld and subtracting that from multiplier\n", i);
                pi -= 4.0 / (long double)i;
            }
            switch(sign) {
                case 0:
                    sign = 1;
                    break;
                case 1:
                    sign = 0;
                    break;
            }
        }
    }
    printf("\nYour value for pi is: %.15Lf\n", pi);
    return 0;
}
