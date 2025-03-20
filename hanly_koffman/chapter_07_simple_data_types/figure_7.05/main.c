/*
 * Program to demonstrate an enum type loop counter
 */

#include <stdio.h>

typedef enum
    {monday, tuesday, wednesday, thursday, friday}
day_t;

void print_day(day_t day);

int
main(void)
{
    double week_hours = 0.0, day_hours;
    day_t today;

    for (today = monday; today <= friday; ++today) {
        printf("Enter hours for ");
        print_day(today);
        printf("> ");
        scanf("%lf", &day_hours);
        week_hours += day_hours;
    }

    printf("\nTotal weekly hours are %.2f\n", week_hours);

    return(0);
}

void
print_day(day_t day)
{
    switch (day) {
        case monday:
            printf("Monday");
            break;
        case tuesday:
            printf("Tuesday");
            break;
        case wednesday:
            printf("Wednesday");
            break;
        case thursday:
            printf("Thursday");
            break;
        case friday:
            printf("Friday");
            break;
    }
}

