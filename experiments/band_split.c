/* A program that takes the income we make as a band and splits it based upon the number of people.
 * Author: Maxwell Reilly
 * Finished Feb 21, 2023
 */

#include <stdio.h>

int main (void) {
    double income, num_bandmates;
    printf("Number of bandmates: \n");
    scanf("%lf", &num_bandmates);
    printf("Total income: \n");
    scanf("%lf", &income);
    printf("%.2f split between %.0f musicians is %.2f dollars.\n", 
            income, num_bandmates, (income / num_bandmates));
    return (0);
}
