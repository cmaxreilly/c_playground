/*
 * Tests function order by ordering three numbers
 */
#include <stdio.h>

void order(double *smp, double *lgp);

int
main(void)
{
    double num1, num2, num3;    /* three numbers to put in order                */

    /* Gets test data                                                           */
    printf("Enter three numbers separated by blanks >> ");

    scanf("%lf%lf%lf", &num1, &num2, &num3);
    /* Orders the three numbers                                                 */
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);

    /* Display the results                                                      */
    printf("The numbers in ascending order are: %.2f %.2f %.2f\n",
            num1, num2, num3);

    return 0;
}

void
order(double *smp, double *lgp)     /* input/output */
{
    double temp; /* temporary variable to hold one number during swap           */
    /* Compares values ointed to by smp and lgp and switches if necessary       */
    if (*smp > *lgp) {
        temp = *smp;
        *smp = *lgp;
        *lgp = temp;
    }
}
