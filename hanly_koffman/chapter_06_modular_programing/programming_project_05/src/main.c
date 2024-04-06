/*
 * Author: C. Maxwell Reilly
 * First Draft: April 5, 2024
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

int
main(void)
{
    double ng, lg, n, difference;
    printf("Enter a number for n >> ");
    scanf("%lf", &n);
    ng = 0.5 * n;
    while (difference >= 0.0005)
    {
        lg = ng;
        ng = 0.5 * (lg + n/lg);
        difference = ng - lg;
    }
    printf("The square root of %lf = %lf\n", n, ng);

    return 0;
}
