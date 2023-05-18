/* Write a program to compute the rate of growth, expressed as a percentage, of an insect population. Take as input
 * the initial size of the population and it's size one week later. Then predict the size of the population in yet
 * another week , assuming that growth continues at the same rate.
 *
 * Author: C. Maxwell Reilly
 * Date: Friday, Feb 24, 2023
 */

#include <stdio.h>

int main(void) {
    double pop1, pop2;
    double rate_growth, percent_growth;
    double pop3;
    printf("Enter the initial size of the population >> ");
    scanf("%lf", &pop1);
    printf("\nEnter the size of the population one week later >> ");
    scanf("%lf", &pop2);
    rate_growth = (pop2 / pop1 - 1);
    percent_growth = rate_growth * 100;
    pop3 = pop2 * (rate_growth + 1);
    printf("\nYour population is growing at a rate of %.0f percent per week.", percent_growth);
    printf("\nIn one week, your population will be %.0f.\n", pop3);
    return(0);
}
    
