/*
 * Author: C. Maxwell Reilly
 * Started: Friday, Jun 23, 2023
 * Finished:
 */

#include<stdio.h>

int
main()
{
    int x[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x is %p\n", x);
    printf("Address of pointer x is %p\n", &x);

    return 0;
}
