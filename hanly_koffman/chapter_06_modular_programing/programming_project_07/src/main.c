/*
 * Author: C. Maxwell Reilly
 * Work started: 2026.04.23
 */

#include <stdio.h>

double calc_drag(double area, double drag_coefficient, double velocity);

int
main(void)
{
    double area, drag_coefficient;
    int i;
    printf("Enter frontal area of vehicle in m^2 > ");
    scanf("%lf", &area);
    printf("Enter drag coefficient of vehicle > ");
    scanf("%lf", &drag_coefficient);
    printf("Area = %4.2lf m^2, Drag Coefficient = %lf\n", area, drag_coefficient);
    printf(" Speed  |   Drag    |\n");
    printf("---------------------\n");
    for (i=0; i<=8; i++)
    {
        double velocity = (double) i * 5.0;
        printf(" %2.0f m/s | %7.2f N |\n", velocity, calc_drag(area, drag_coefficient, velocity));
    }
    return 0;
}

double
calc_drag(double area, double drag_coefficient, double velocity)
{
    double force;
    force = .5 * drag_coefficient * area * 1.23 * velocity * velocity;
    return force;
}
