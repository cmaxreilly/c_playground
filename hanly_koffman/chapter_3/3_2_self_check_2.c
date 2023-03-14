/* 
 * Evaluate the following:
 */

#include <stdio.h>
#include <math.h>

int main (void) {
    /* a floor(15.8) */
    printf("a. %.2f\n", floor(15.8));
    /* b. floor(15.8 + 0.5) */
    printf("b. %.2f\n", floor(15.8 + 0.5));
    /* c. ceil(-7.2) * pow(4.0,2.0 */
    printf("c. %.2f\n", ceil(-7.2) * pow(4.0,2.0));
    /* d. sqrt(floor(fabs(-16.8))) */
    printf("d. %.2f\n", sqrt(floor(fabs(-16.8))));
    /* e. log10(1000.0) */
    printf("e. %.2f\n", log10(1000.0));
    return(0);
}

