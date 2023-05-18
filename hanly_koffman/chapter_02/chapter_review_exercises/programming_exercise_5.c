/* Metro City Planners proposes that a community develop a new water supply by replacing all of the communitiy's 
 * toilets with low-flush models that use only 2 liters per flush. Assume that there is about 1 toilet for every 3
 * persons, that existing toilets use an average of 15 liters per flush, and a toilet is flushed on average of
 * 14 times a day, and that the cost to install each new toilet is $150. Write a program that would estimate the
 * magnitutde (liters/day) and cost of the new water supply based on the community's population. 
 *
 * Author: C. Maxwell Reilly
 * Date: Feb 24, 2023
 */

#include <stdio.h>
#define INSTALL_COST 150
int main(void) {
    double pop;
    double toilets_per, lit_per_f, flush_pd, n_lit_per_f;
    double old_lit_pd, new_lit_pd, magnitude, cost;
    toilets_per = .3333333333;
    lit_per_f = 15;
    n_lit_per_f = 2;
    flush_pd = 14;
    printf("Enter population>\n");
    scanf("%lf", &pop);
    old_lit_pd = pop * toilets_per * flush_pd * lit_per_f;
    new_lit_pd = pop * toilets_per * flush_pd * n_lit_per_f;
    cost = pop * toilets_per * INSTALL_COST;
    printf("Old water usage = %.0f liters per day.\n", old_lit_pd);
    printf("New water usage = %.0f liters per day.\n", new_lit_pd);
    printf("Cost for replacement = $%.2f.\n", cost);

    return (0);
}
