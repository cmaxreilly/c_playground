/*
 * In shopping for a new house, you mst consider several factors. In this prob-
 * lem the initial cost of the house, the extimated annual fuel costs, and the 
 * annual tax rate are available. Write a program that will determin the total
 * cost of a house after a five-year period and run the program for each of the
 * following sets of data.
 *
 * _____________________________________________________________________________
 * Initial House Cost           Annual Fuel Cost            Tax Rate
 * _____________________________________________________________________________
 * 67,000                       2,300                       0.025
 * 62,000                       2,500                       0.025
 * 75,000                       1,850                       0.020
 * _____________________________________________________________________________
 *
 * To calculate the house cost, add the initial cost to the fuel cost for five years,
 * then add the taxes for five years. Taxes for one year are computed by multi-
 * plying the tax rate by the initial cost. Write and call a function that displays
 * instructions to the program user
 *
 *
 * Author: C. Maxwell Reilly
 *
 * Date started: Friday April 7
 *
 * Date finished:
 */

#include<stdio.h>

void instruct(void);
void gather_data(void);
double calc_cost(double init_cost, double fuel_cost, double tax_rate);
double report(double);

double init_cost, fuel_cost, tax_rate;

int
main(void)
{
    instruct();
    gather_data();
    report(calc_cost(init_cost, fuel_cost, tax_rate));
    return(0);
}


void 
instruct(void)
{
    printf("This program calculates total cost over the first five years of a house's ownership\n");
    printf("In order to use this program, you must have:\n");
    printf("1: The initial cost of the house\n");
    printf("2: The annual fuel cost associated with the location of the house\n");
    printf("3: The tax rate of the house in decimals\n");
}
void 
gather_data(void)
{
    printf("Enter initial cost of house >> ");
    scanf("%lf", &init_cost);
    printf("Enter the yearly fuel cost >> ");
    scanf("%lf", &fuel_cost);
    printf("Enter the tax rate >> ");
    scanf("%lf", &tax_rate);
}

double 
calc_cost(double init_cost, double fuel_cost, double tax_rate)
{
    double five_year_cost;
    five_year_cost = init_cost + ((5 * fuel_cost) + (5 * init_cost * tax_rate));
    return(five_year_cost);
}

double 
report(double first_year_cost)
{
    printf("The cost of your house in the first five years is $%.2f\n", first_year_cost);
    return(0);
}

