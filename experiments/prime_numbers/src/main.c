/*
 * Author: C. Maxwell Reilly
 * Started: Wed Feb 14
 * Finished:
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "functions.h"

bool is_prime(int n);

int
main(void)
{

    /* Variables for my formula */

    /* Driver Variables */
    int n = 50;
    for (int i = 1;
            i <= n;
            i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


    /* Control Flow */

bool
is_prime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2;
            i <= n / 2;
            i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
