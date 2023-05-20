/* 
 * Compute the sum and average of two numbers.
 */

#include <stdio.h>

int main (void) {
    double one, two, 
           sum,
           average;
    /* Get two numbers. */
    printf("Enter your first number >> ");
    scanf("%lf", &one);
    printf("Enter your second number >> ");
    scanf("%lf", &two);

    /* Compute the sum of the numbers */
    sum = one + two;

    /* Compute the average of the numbers. */
    average = sum / 2;

    /* Display the sum and the average. */
    printf("Your sum is %.2f and your average is %.2f\n", sum, average);
    
    return(0);
}
