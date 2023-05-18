/*
 * Computes and prints a water bill given an unpaid balance and previous and 
 * current meter readings. Bill includes a demand charge of 35.00, a use 
 * charge of $1.10 per thousand galons, and a surcharge of $2.00 if there is 
 * an unpaid balance.
 */

/* 
 * Programming Exercise 1/Self check 1:
 * change the algorith for function comp_use_charge assuming assuming the fee is 
 * doubled for any gallons used in excess of 100,000. The basic fee is assessed
 * for the first 100,000 gallons used.
 */

#include<stdio.h>

#define DEMAND_CHG  35.00   /* basic water demand charge                */
#define PER_1000_CHG 1.00   /* charge per thousand gallons used         */
#define HIGH_USE   100.00   /* threshold after which high use fees kick in. */
#define HU_PER_1000  2.00   /* charge per thousand past 100,000 gallons.*/
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
    scanf("%lf", &unpaid);
    printf("Enter previous meter reading >> ");
    scanf("%d", &previous);
    printf("Enter current meter readings >> ");
    scanf("%d", &current);

    /* compute use charge.                                                  */
    use_charge = comp_use_charge(previous, current);

    /* Determine applicable late charge                                     */
    late_charge = comp_late_charge(unpaid);

    /* figure bill.                                                         */
    bill = DEMAND_CHG + use_charge + unpaid + late_charge;

    /* Print bill.                                                          */
    display_bill(late_charge, bill, unpaid);
    return (0);
}


/*
 * Display user instructions
 */

void
instruct_water(void)
{
    printf("This program figures a water bill ");
    printf("based on the demand charge\n");
    printf("($%.2f) and a $%.2f per 1000 ", DEMAND_CHG, PER_1000_CHG);
    printf("gallons per use charge.\n\n");
    printf("In addition, any usage beyond $%.2f,000 ", HIGH_USE);
    printf("gallons is considered high use, \nand is billed ");
    printf("at double the normal rate.");
    printf("A $%.2f surcharge is added to ", LATE_CHG);
    printf("accounts with an upaid balance.\n");
    printf("\nEnter unpaid balance, previous ");
    printf("and current meter readings\n");
    printf("on separate lines after the prompts.\n");
    printf("Press <return> or <enter> after ");
    printf("typing each number.\n\n");
}

/*
 * Compute use charge
 * Pre: previous and current are defined.
 */
double
comp_use_charge(int previous, int current)
{
    double difference, charge;
    difference = current - previous;
    if (difference < HIGH_USE){
        charge = difference * PER_1000_CHG;
    } else if (difference > HIGH_USE){
        charge = (HIGH_USE * PER_1000_CHG) + ((difference - HIGH_USE) * HU_PER_1000);
    } else {
        printf("!!!INVALID INPUT!!!");
    }
    return(charge);
}

/*
 * Compute late charge.
 * Pre : unpaid is defined.
 */
double
comp_late_charge(double unpaid)
{
    double late_charge; /* charge for non-payment of part of previous
                           balance                                          */
    if (unpaid > 0)
        late_charge = LATE_CHG;     /* Asseses late charge on unpaid balance*/
    else
        late_charge = 0.0;

    return(late_charge);
}

/*
 * Displays late charge if any and bill.
 * Pre : late charge, bill, and unpaid are defined.
 */
void
display_bill(double late_charge, double bill, double unpaid)
{
    if (late_charge > 0.0) {
        printf("\nBill includes $%.2f late chage", late_charge);
        printf(" on unpaid balance of $%.2f\n", unpaid);
    }
    printf("\nTotal due = $%.2f\n", bill);
}
