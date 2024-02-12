/*
 * Author: C. Maxwell Reilly
 * Started: Tuesday Jan 30, 2024
 * Finished:
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

int
main(void)
{

    /* Variables for my formula */
    double H, // Rate of heat transfer in watts.
           k, // Coefficient of thermal conductivity.
           A, // Cross-sectional area of conductor in Watts/meter Kelvin.
           T2,// Temperature on one side in Kelvin.
           T1,// Temperature on other side Kelvin.
           X; // Thickness of Conductor in meters.

    /* Driver Variables */
    int status;

    /* Input routines */
    printf("Respond to the prompts with the data known. For the\n");
    printf("unknown quantity, enter a question mark (?).\n\n");
    printf("Rate of heat transfer (watts) >> ");
    status = scanf("%lf", &H);
    if (status == 0)
        H = 0;
    printf("Coefficient of thermal conductivity (W/m-K) >> ");
    scanf("%lf", &k);
    printf("Cross-sectional are of conductor (m^2) >> ");
    scanf("%lf", &A);
    printf("Temperature on one side (K) >> ");
    scanf("%lf", &T2);
    printf("Temperature on other side (K) >> ");
    scanf("%lf", &T1);
    printf("Thickness of conductor (m) >> ");
    scanf("%lf", &X);
    printf("\n");
    printf("            KA (T2 - T1)\n");
    printf("H  =  ------------------------\n");
    printf("                X\n\n");

    /* Control Flow */
    if (H == 0)
    {
        H = calc_h(k, A, T2, T1, X);
        printf("calc_h should be called\n");
        return 0;
    } else if (k == 0)
    {
        k = calc_k(H, A, T2, T1, X);
        printf("calc_k should be called\n");
        return 0;
    } else if (A == 0)
    {
        A = calc_A(k, H, T2, T1, X);
        printf("calc_A should be called\n");
        return 0;
    } else if (T2 == 0)
    {
        printf("calc_T2 should be called\n");
        return 0;
    } else if (T1 == 0)
    {
        printf("calc_T1 should be called\n");
        return 0;
    } else if (X == 0)
    {
        printf("calc_X should be called\n");
        return 0;
    } else
    {
        printf("All information known. Printing all data:\n");
        report(H, k, A, T2, T1, X);
    }

    return 0;

}
