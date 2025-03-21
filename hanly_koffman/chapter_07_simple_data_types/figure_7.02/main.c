/* 
 * Find implementation's ranges for positive numeric data
 */

#include <stdio.h>
#include <limits.h> /* definition of INT_MAX            */
#include <float.h>  /* definition of DBL_MIN, DBL_MAX   */

int
main(void)
{
    printf("Range of positive values of type int: 1 . . %d\n", INT_MAX);
    printf("This is equivalent to %d bits, or %zu bytes.\n\n", 8 * (int)sizeof(int), sizeof(int));
    printf("Range of positive values of type double: %e . . %e\n", DBL_MIN, DBL_MAX);
    printf("This is equivalent to %d bits, or %zu bytes.\n\n", 8 * (int)sizeof(double), sizeof(double));
    printf("Range of positive values of type long: %ld . . %ld\n", LONG_MIN, LONG_MAX);
    printf("This is equivalent to %d bits, or %zu bytes.\n\n", 8 * (int)sizeof(long), sizeof(long));
    printf("Range of positive values of type long long: %lld . . %lld\n", LLONG_MIN, LLONG_MAX);
    printf("This is equivalent to %d bits, or %zu bytes.\n\n", 8 * (int)sizeof(long long), sizeof(long long));

    return(0);
}
