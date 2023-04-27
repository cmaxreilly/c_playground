/*
 * Computes and prints a water bill given an unpaid balance and previous and 
 * current meter readings. Bill includes a demand charge of 35.00, a use 
 * charge of $1.10 per thousand galons, and a surcharge of $2.00 if there is 
 * an unpaid balance.
 */

#include<stdio.h>

#define DEMAND_CHG  35.00   /* basic water demand charge                */
#define PER_1000_CHG 1.00   /* charge per thousand gallons used         */
#define LATE_CHG     2.00   /* surcharge assessed on upaid balance      */

/* Function prototypes                                                  */
void instruct_water(void);

double comp_use_charge(int previous, int current);

double comp_late_charge(double unpaid);

void display_bill(double late_charge, double bill, double unpaid);

int
main(void)
{
    int     previous;       /* input - meter reading from previous quarter
                                in thousands of gallons                     */
    int     current;        /* input - meter reading from current quarter   */
    double  unpaid;         /* input - unpaid balance of previous bill      */
    double  bill;           /* output - water bill                          */
    int     used;           /* thousands of gallons used this quarter       */
    double  use_charge;     /* charge for actual water use                  */
    double  late_charge;    /* charge for non-payment of part of previous 
                               balance                                      */

    /* Display user instruction.                                            */
    instruct_water();

    /* Get data: unpaid balance, previous and current meter
     * readings.                                                            */
    printf("Enter unpaid balance >> ");

