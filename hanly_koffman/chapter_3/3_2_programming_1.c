/* 
 * Write statements that compute and display the absolute difference of two type double variables, x and y (|x - y|).
 */

#include <stdio.h>
#include <math.h>

int main (void) {
    double x, y;
    printf("Enter a value for x >>");
    scanf("%lf", &x);
    printf("Enter a value for y >>");
    scanf("%lf", &y);
    printf("The absolute difference between x and y is %.2f\n", fabs(x - y));
    return(0);
}
