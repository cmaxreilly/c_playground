/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 25, 2023
 */

#include<stdio.h>
#include<math.h>

#define PI 3.141562

double  sine, cosine;
int     degree, init_degree, final_degree, step_degree;


int
main(void)
{
    /* Variable declaration */

    init_degree = 0;
    final_degree = 360;
    step_degree = 10;
    degree = 0;

    /* Display the table heading */
    printf("    Degrees     sine     cosine\n");

    /* Display the table */
    for     (degree = 0 /*init_degree*/;
            degree <= 360 /*final_degree*/;
            degree += 10 /*step_degree*/) {
        sine = sin(degree * (PI / 180));
        cosine = cos(degree * (PI / 180));
        printf("%6c%3d%8c%7.2f%8c%7.2f\n", ' ', degree, ' ', sine, ' ', cosine);
    }
    return(0);

}

