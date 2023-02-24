/* Write a program that takes as input the numerators and denominators of two fractions. Your program should 
 * display the numerator and denominator of the fraction that represents the product of the two fractions. Also, 
 * display the percent equivalent of the resulting product.
 *
 * Author: C. Maxwell Reilly
 * Date:
 */

#include <stdio.h>

int main (void) {
    double num1, den1, num2, den2;
    double num3, den3, percent;
    printf("Enter your first fraction:\nNumerator >> ");
    scanf("%lf", &num1);
    printf("\nDenominator >> ");
    scanf("%lf", &den1);
    printf("\nEnter your second fraction: \nNumerator >> ");
    scanf("%lf", &num2);
    printf("\nDenominator >> ");
    scanf("%lf", &den2);
    num3 = num1 * num2;
    den3 = den1 * den2;
    percent = num3 / den3 * 100;
    printf("\nYour final fraction is %.0f/%.0f, which is %.2f percent.\n", num3, den3, percent);
    return(0);
}
