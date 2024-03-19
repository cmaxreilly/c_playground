/*
 * Author: C. Maxwell Reilly
 * Started: Tuesday, March 19
 * Finished: Tuesday, March 19
 */

#include <stdio.h>
#include <math.h>
#include "functions.h"

int
main(void)
{
    /* Price of Cartridges for comparison */
    double price_of_cartridges = 1.5;

    /* Initial costs */
    double init_price_of_primers = 100, init_price_of_powder = 63.99, press_price = 179.99;
    double cullet_and_pilot_guide = 8.00, powder_trickler = 20.00, scale = 70.00, case_lube = 10.00;
    double case_prep_kit = 400.00, reloading_manual = 49.84, total_initial_cost;

    /* Variable costs */
    double price_of_bullets = .3099;

    /* Driver variables */
    int number_of_rounds_reloaded = 0, i, step = 100;
    double gross_cost, gross_savings, comparable_price, profit;

    /* Calculation of initial cost */
    total_initial_cost = init_price_of_primers + init_price_of_powder + press_price
        + cullet_and_pilot_guide + powder_trickler + scale + case_lube
        + case_prep_kit + reloading_manual + total_initial_cost;

    /* Header */
    printf("Cartridges reloaded | Comparable Retail | Profit   | \n");

    /* Control Flow */
    for ( i = 0;
            i < 40;
            i ++)
    {
        comparable_price = number_of_rounds_reloaded * price_of_cartridges;
        gross_cost = total_initial_cost + (number_of_rounds_reloaded * price_of_bullets);
        profit = comparable_price - gross_cost;

        printf("%18d  |%13.2lf      | %8.2lf |  \n",
                number_of_rounds_reloaded, comparable_price, profit);
        number_of_rounds_reloaded = number_of_rounds_reloaded + step;
    }

    return 0;
}
