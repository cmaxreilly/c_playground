/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 29, 2023
 */

#include<stdio.h>



int
main(void)
{
    int multiplicand, multiplier;
    for     (multiplicand = 0;
            multiplicand <= 9;
            multiplicand ++){
        for
            (multiplier = 0;
             multiplier <= 9;
             multiplier ++) {
                printf("%2d%s", multiplicand * multiplier, "  ");
            }
        printf("\n\n");
    }
    return(0);

}

