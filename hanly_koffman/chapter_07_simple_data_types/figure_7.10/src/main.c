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
    double  x_left, x_right, /* left, right endpoints of interval    */
            epsilon,
            root;
    int     error;

    /* Get endpoints and error tolerance from the user              */
    printf("\nEnter interval endpoints> ");
    scanf("%lf%lf", &x_left, &x_right);
    printf("\nEnter tolerance> ");
    scanf("%lf", &epsilon);

    /* Use bisect function to look for roots of g and h             */
    printf("\n\nFunction g");
    root = bisect(x_left, x_right, epsilon, g, &error);
    if (!error)
        printf("\n  g(%.7f) = %e\n", root, g(root));

    printf("\n\nFunction h");
    root = bisect(x_left, x_right, epsilon, h, &error);
    if(!error)
        printf("\n   h(%.7f) = %e\n", root, h(root));
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

    /* If no change of sign occurs on the interval there is not a
     * unique root. Searches for the unique root if there is one.*/
    if (f_left * f_right > 0) { /* same sign */
        *errp = TRUE;
        printf("\nMay be no root in [%.7f, %.7f]", x_left, x_right);
    } else {
        *errp = FALSE;

        /* Searches as long as interval size is large enough
         * and no root has been found                           */
        while (fabs(x_right - x_left) > epsilon && !root_found) {
            /* Computes midpoint and function value at midpoint */
            x_mid = (x_left + x_right) / 2.0;
            f_mid = f(x_mid);
            if (f_mid == 0.0) {                 /* Here's the root          */
                root_found = TRUE;
            } else if (f_left * f_mid < 0.0) {  /* Root in [x_left, x_mid]  */
                x_right = x_mid;
            } else {                            /* Root in [x_mid, x_right] */
                x_left = x_mid;
                f_left = f_mid;
            }

            /* Prints root and interval or new interval */
            if (root_found)
                printf("\nRoot found at x = %.7f, midpoint of [%.7f, %.7f]",
                        x_mid, x_left, x_right);
            else
                printf("\nNew interval is [%.7f, %.7f]",
                        x_left, x_right);
        }
    }
    /* If there is no root, it is the midpoint of [x_left, x_right]     */
    return ((x_left + x_right) / 2.0);
}
/* Functtions for which roots are sought
 *
 *   3    2
 * 5x - 2x + 3
 */

double
g(double x)
{
    return (5 * pow(x, 3.0) -2 * pow(x, 2.0) + 3);
}

/*   4     2
 * x - 3x - 8
 */

double
h(double x)
{
    return(pow(x, 4.0 - 3 * pow(x, 2.0) - 8));
}
