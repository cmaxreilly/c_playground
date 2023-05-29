/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 29, 2023
 */

#include<stdio.h>

#define CONTROL 4

int
main(void)
{
    int a, i, n;
    if (a < CONTROL) {
        for     (i = 0;
                i <= CONTROL;
                i++, a++) {
            for     (n = 0;
                    n <= i;
                    n ++) {
                printf("%d ", n);
            }
            printf("\n");
        }
    } else 
    {
        for     (i = CONTROL;
                i >= 0;
                i--, a++) {
            for     (n = 0;
                    n <= i;
                    n ++) {
                printf("%d ", n);
            }
            printf("\n");
        }
    }
    return(0);

}

