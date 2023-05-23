/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 22, 2023
 */

#include<stdio.h>

int day, month, year;

int jan, feb, mar, apr, may, jun, jul, aug, sept, oct, nov, dec;

int leap(int year);
int
main(void)
{
    printf("This program takes a date and tells you what day of the year\n");
    printf("it is.\n");
    printf("Enter the day >> ");
    scanf("%d", &day);
    printf("Enter the month >> ");
    scanf("%d", &month);
    printf("Enter the year >> ");
    scanf("%d", &year);
    printf("\n");
    leap(year);

    return(0);

}

int
leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        /* is a leap year */
        return (1);
    else
        return(0);
}
