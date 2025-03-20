#include <stdio.h>

typedef enum {
    monday, tuesday, wednesday, thursday, friday, saturday, sunday
} day_t;

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
        case sunday:
            printf("Sunday");
            break;
        case saturday:
            printf("Saturday");
            break;
    }
}

