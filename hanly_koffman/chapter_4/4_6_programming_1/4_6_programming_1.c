/* 
 * Conservation requirements:
 *
 * We need to modify the water bill program so that customers who fail to meet con-
 * servation requirements are charged for all their water use at twice the rate of
 * customers who meet the guidelines. Residents of this water district are required to 
 * use no more than 95 percent of the amount of water they used in the same quarter
 * last year in order to qualify for the lower use rate of $1.10 per thousand gallons
 */

#include<stdio.h>

#define DEMAND_CHG          35.00   /* basic water demand charge                    */
#define PER_1000_CHG        1.10    /* charge per thousand gallons used             */
#define HIGH_USE            100.00  /* threshold after which high use fees kick in. */
#define OVERUSE_CHG_RATE    2.00    /* charge per thousand past 100,000 gallons.    */
#define LATE_CHG            2.00    /* surcharge assessed on unpaid balance         */
#define CONSERV_RATE        95      /* percent of last year's use allowed this year */
/* Function prototypes                                                              */
void instruct_water(void);

double comp_use_charge(int previous, int current, int use_last_year);

double comp_late_charge(double unpaid);

void display_bill(double late_charge, double bill, double unpaid);

int
main(void)
{
    int     previous;               /* input - meter reading from previous quarter
                                        in thousands of gallons                     */
    int     current;                /* input - meter reading from current quarter   */
    double  unpaid;                 /* input - unpaid balance of previous bill      */
    double  bill;                   /* output - water bill                          */
    int     used;                   /* thousands of gallons used this quarter       */
    double  use_charge;             /* charge for actual water use                  */
    double  late_charge;            /* charge for non-payment of part of previous 
                                       balance                                      */
    int     use_last_year;          /* use for the same quarter last year           */

    /* Display user instruction.                                                    */
    instruct_water();

    /* Get data: unpaid balance, previous and current meter
     * readings.                                                                    */
    printf("Enter unpaid balance >> ");
    scanf("%lf", &unpaid);
    printf("Enter previous meter reading >> ");
    scanf("%d", &previous);
    printf("Enter current meter readings >> ");
    scanf("%d", &current);
    printf("Enter the number of gallons used in the same quarter last year >> ");
    scanf("%d", &use_last_year);

    /* compute use charge.                                                          */
    use_charge = comp_use_charge(previous, current, use_last_year);

    /* Determine applicable late charge                                             */
    late_charge = comp_late_charge(unpaid);

    /* figure bill.                                                                 */
    bill = DEMAND_CHG + use_charge + unpaid + late_charge;

    /* Print bill.                                                                  */
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
    printf("In addition, any usage beyond %d%% of last year's usage ", CONSERV_RATE);
    printf("violates conservation rules \nand is billed ");
    printf("at double the normal rate.");
    printf("A $%.2f surcharge is added to ", LATE_CHG);
    printf("accounts with an unpaid balance.\n");
    printf("\nEnter unpaid balance, previous ");
    printf("and current meter readings, and last year's usage\n");
    printf("on separate lines after the prompts.\n");
    printf("Press <return> or <enter> after ");
    printf("typing each number.\n\n");
}

/*
 * Compute use charge
 * Pre: previous and current are defined.
 */
double comp_use_charge(int previous, int current, int use_last_year)
{
    int used;           /* gallons of water used (in thousands) */
    double use_charge;  /* charge for actual water use          */
    used = current - previous;
    if (used <= CONSERV_RATE / 100.0 * use_last_year) {
        /* conservation guidelines met */
        use_charge = used * PER_1000_CHG;
    } else {
        printf("Use charge is at %.2f times ", OVERUSE_CHG_RATE);
        printf("normal rate since use of\n");
        printf("%d units exceeds %d percent ", used, CONSERV_RATE);
        printf("of last year's %d-unit use.\n", use_last_year);
        use_charge= used * OVERUSE_CHG_RATE * PER_1000_CHG;
    }

    return(use_charge);
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
        late_charge = LATE_CHG;     /* Assesses late charge on unpaid balance*/
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
        printf("\nBill includes $%.2f late change", late_charge);
        printf(" on unpaid balance of $%.2f\n", unpaid);
    }
    printf("\nTotal due = $%.2f\n", bill);
}
