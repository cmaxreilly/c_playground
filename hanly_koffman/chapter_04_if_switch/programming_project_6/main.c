/*
 * Author: C. Maxwell Reilly
 * Date: Monday, May 22, 2023
 */

#include<stdio.h>

int day, month, year;


int leap(int year);
int
main(void)
{
    int counter, month_days, total_days;
    month_days = 0;
    printf("This program takes a date and tells you what day of the year\n");
    printf("it is.\n");
    printf("Enter the day in the format DD >> ");
    scanf("%d", &day);
    printf("Enter the month in the format MM>> ");
    scanf("%d", &month);
    printf("Enter the year in the format YYYY >> ");
    scanf("%d", &year);
    printf("\n");
    int days_per_month[12] = {0, 31, 28 + leap(year), 31, 30, 31, 30, 31, 31, 30, 31, 30};
    counter = month - 1;
    while (counter >= 0){
        month_days += days_per_month[counter];
        counter -= 1;
    }
    printf("That day is number %d in the year.\n", month_days);

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
