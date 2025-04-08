#include <stdio.h>

int
main(void)
{
    int numerator, i;
    double total = 0.0;
    for (   numerator = 2;
            numerator <= 30;
            numerator++)
    {
        for (   i = 1;
                i <= numerator;
                i ++)
        {
            total += 1/(double)numerator;
        }
        if(total == 1.0)
            printf("Adding %d 1/%d's gives a result of 1.0: %f\n", numerator, numerator, total);
        else if(total < 1.0)
            printf("Adding %d 1/%d's gives a result of less than 1.0: %f\n", numerator, numerator, total);
        else
            printf("Adding %d 1/%d's gives a result of greater than 1.0: %f\n", numerator, numerator, total);
        total = 0.0;
    }
    return 0;
}


