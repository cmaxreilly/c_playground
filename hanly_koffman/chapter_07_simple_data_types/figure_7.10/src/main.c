/*
 * Author: C. Maxwell Reilly
 * First Draft: May 27, 2024
 *
 * finds roots of the equations
 *      g(x) = 0 and h(x) = 0
 * on a specified interval [x_left, x_right] using the bisection method.
 */

#include <stdio.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

double bisect(double x_left, double x_right, double epsilon,
        double f(double farg), int *errp);
double g(double x);
double h(double x);

int
main(void)
{
    return 0;
}

/* 
 * Implements the bisection method for finding a root of a function f.
 * Finds a root (and sets output parameter error flag to FALSE) if
 * signs of fp(x_left) and fp(x_right) are different. Otherwise sets
 * output parameter error flag to TRUE.
 */

double
bisect( double x_left,          /* input  - endpoints of interval in    */
        double x_right,         /*          which to look for a root    */
        double epsilon,         /* input  - error tolerance             */
        double f(double farg),  /* input  - the function                */
        int     *errp)          /* ouput  - error flag                  */
{
    double x_mid,       /* midpoint of interval */
           f_left,      /* f(x_left)            */
           f_mid,       /* f(x_mid)             */
           f_right;     /* f(x_right)           */
    int    root_found = FALSE;

    /* Computes function values at initial endpoints of interval  */
    f_left = f(x_left);
    f_right = f(x_right);
}
