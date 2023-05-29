/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 29, 2023
 */

#include<stdio.h>

#define CONTROL 4

int
main(void)
{
    int i, n;
        for     (i = 0;
                i < CONTROL;
                i++) {
            for     (n = 0;
                    n <= i;
                    n ++) {
                printf("%d ", n);
            }
            printf("\n");
        }
        for     (i = CONTROL;
                i >= 0;
                i--) {
            for     (n = 0;
                    n <= i;
                    n ++) {
                printf("%d ", n);
            }
            printf("\n");
        }
    return(0);

}

