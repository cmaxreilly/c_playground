/* Assignment: Write a program to take two numbers as input data and display their sum,
 * their difference, their product, and their quotient.
 * Author: Max Reilly
 * Feb 21, 2023
 */

#include <stdio.h>

int main (void) {
    /* input variables */ 
    double x, y;
    /* ouput variables */
    double sum, difference, product, quotient;
    printf("Enter two numbers\n");
    scanf("%lf%lf", &x, &y);
    printf("Your two numbers are %.2f and %.2f.\n", x, y);
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = x / y;
    printf("Sum: %.2f\nDifference : %.2f\nProduct: %.2f\nQuotient: %.2f\n", sum, difference, product, quotient);
    return (0);
}

