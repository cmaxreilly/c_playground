/*
 * Self check exercises from HK chapter 7.
 */

#include <stdio.h>

typedef enum
{
    january, february, march, april, may, june, july, august, september, october, november, december
} month_t;

void
print_month(month_t month)
{
    switch (month)
    {
        case (january):
            printf("January");
            break;
        case (february):
            printf("February");
            break;
        case (march):
            printf("March");
            break;
        case (april):
            printf("April");
            break;
        case (may):
            printf("May");
            break;
        case (june):
            printf("June");
            break;
        case (july):
            printf("July");
            break;
        case (august):
            printf("August");
            break;
        case (september):
            printf("September");
            break;
        case (october):
            printf("October");
            break;
        case (november):
            printf("November");
            break;
        case (december):
            printf("December");
            break;
    }
}
int
main(void)
{
    /* I think that there is a flaw in this statment, namely that enumerated types are zero indexed. */

    printf("1. Declare an enumerated type month_t and rewrite the following if state-\n");
    printf("   ment, assuming that cur_month is type month_t instead of type int.\n");
    printf("   Also, write the equivalent switch statement.\n\n");
    printf("2. Write function print_month for enumerated type month_t.\n");
    /* this was yet another typo in this book! Very interesting. */
    month_t cur_month = august;
    switch (cur_month) {
        case (january):
            printf("Happy New Year!\n");
            break;
        case (june):
            printf("Summer begins.\n");
            break;
        case (september):
            printf("Back to school.\n");
            break;
        case (december):
            printf("Happy Holidays!\n");
            break;
        default:
            printf("Happy ");
            print_month(cur_month);
            printf("!\n");
    }

    return(0);
}
