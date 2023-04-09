/* 
 * HK: Programming Project no. 7
 *
 * A cyclist coasting on a level road slows from a speed of 10 mi/hr to 2.5
 * mi/hr in one minute. Write a computer program that calculates the cyclist's
 * constant rate of acceleration and determines how long the cyclicst will take to
 * come to rest, given the initial speed of 10 mi/hr. (Hint: Use the equation
 *          a = (vf - vi)/t
 * where a is acceleration, t is time interval, vi is initial velocity, and vf if final
 * velocity.) Write and call a function that displays instructions to the program
 * user and a funcion that computes a, given t, vf, and vi.
 * 
 * Author: C. Maxwell Reilly
 *
 * Started: Sunday April 9, 2023
 *
 * Finished:
 */

#include<stdio.h>

void instruct(void);
void data_input(void);
double compute_accel(double t, double vi, double vf);
double compute_t_to_rest(double a, double vi);
void report(void);

double t, vi, vf;

int
main(void)
{
    instruct();
    data_input();
    report();
    return(0);
}

void
instruct(void)
{
    printf("\nThis program takes two velocities and a time between them and calculates\n");
    printf("the acceleration and the time it will take for the object to reach 0 velocity.\n");
    printf("In order to use, simply enter the requested information at the prompt.\n");
}

void
data_input(void)
{
    printf("\nEnter time >> ");
    scanf("%lf", &t);
    printf("Enter initial velocity >> ");
    scanf("%lf", &vi);
    printf("Enter final velocity >> ");
    scanf("%lf", &vf);
}
double 
compute_accel(double t, double vi, double vf)
{
    return(0);
}

double compute_t_to_rest(double a, double vi)
{
    return(0);
}

void
report(void)
{
    printf("Time = %.2f\nVi = %.2f\n Vf = %.2f\n", t, vi, vf);
}
