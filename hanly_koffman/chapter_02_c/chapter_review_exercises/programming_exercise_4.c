/* Write a program that caluclate how many Btus of heat are delivered to a house given the number of gallons of 
 * oil birned and the efficiency of the hous's oil furnace. Assume that a barrel of oil (42 gallons) has an 
 * energy equivalent of 5,800,000 Btu. For one test use an efficiency of 65 percent and 100 gallons of oil.
 *
 * Author: C. Maxwell Reilly
 * Date Written: Feb 23, 2023
 */

#include <stdio.h>

#define GAL_PER_BARREL 42
#define BTU_PER_BARREL 5800000

int main (void) {
    /* input variables */
    double gal_oil, furn_eff;
    /* output variables */
    double btu_delivered;
    printf("Enter number of gallons of oil delivered. >\n");
    scanf("%lf", &gal_oil);
    printf("Enter furnace efficiency in percentage. >\n");
    scanf("%lf", &furn_eff);
    furn_eff = furn_eff / 100;
    btu_delivered = ((gal_oil/GAL_PER_BARREL) * BTU_PER_BARREL) * furn_eff;
    printf("%.2f BTU's of heat were delivered to the home in question.\n", btu_delivered);
    return 0; 
}
