#include <stdio.h>
#include <math.h>
#include "functions.h"

double calc_h(double k, double A, double T2, double T1, double X)
{
    double h;
    printf("calc_h called\n");
    return h;
}

/* Calculates the coefficient of thermal conductivity K */
double
calc_k(double h, double A, double T2, double T1, double X)
{
    double k;
    printf("calc_k called\n");
    return k;
}

/* Function that calculates the cross sectional area of the conductor A */
double calc_A(double h, double k, double T2, double T1, double X)
{
    double A;
    printf("calc_A called\n");
    return A;
}

/* Function that calculates the temperature on one side T2 */
double calc_T2(double h, double k, double A, double T1, double X)
{
    double T2;
    printf("calc_T2 called\n");
    return T2;
}

/* Function that calculates the temperature on the other side T1 */
double calc_T1(double h, double k, double A, double T2, double X)
{
    double T1;
    printf("calc_T1 called\n");
    return T1;
}

/* Function that calculates the thickness of the conductor in meters X */
double calc_X(double h, double k, double A, double T2, double T1)
{
    double X;
    printf("calc_X called\n");
    return X;
}

/* Function that reports on all of the findings. */
void
report(double h, double k, double A, double T2, double T1, double X)
{
    printf("Reporting function called\n");
}
