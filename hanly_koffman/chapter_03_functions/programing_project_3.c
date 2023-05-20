/* 
 * Write acomputer program that computes the duration of a projectile's flight
 * and its hieght above the ground when it reaches the target. As part of your
 * solution, write andcall a fnction that displays instructions to the program
 * user
 *
 * Author: C. Maxwell Reilly
 *
 * Date: April 4, 2023
 */



#include<stdio.h>
#include<math.h>

#define G 32.17

/* Problem inputs                                           */
double theta;       /* input - angle (radians) of elevaton  */
double distance;    /* input - distance (ft) to target      */
double velocity;    /* input - projectile velocity (ft/sec) */

/* Problem outputs                                          */
double time;        /* output - time (sec) of flight        */
double height;      /* output - height at impact            */

/* Function prototypes. */ 

double calc_time(double theta, double distance, double velocity);
double calc_height(double theta, double time, double velocity);
void instruct(void);

int
main(void)
{
    instruct();
    printf("Enter angle above y axis in radians >> ");
    scanf("%lf", &theta);
    printf("Enter distance to target in feet >> ");
    scanf("%lf", &distance);
    printf("Enter velocity of object in feet/second >> ");
    scanf("%lf", &velocity);
    time = calc_time(theta, distance, velocity);
    height = calc_height(theta, time, velocity);
    printf("Your time to target is %.2f seconds, and your height on reaching target is %.2f feet.\n", time, height);
    return(0);
}

double
calc_time(double theta, double distance, double velocity)
{
    time = distance / (velocity * cos(theta));
    return time;
}

double
calc_height(double theta, double time, double velocity)
{
    height = velocity * sin(theta) * time - (G * time * time/ 2);
    return height;
}

void 
instruct(void)
{
    printf("First, ascertain the angle of elevation, velocity, and angle in radians of your projectile.\n");
    printf("Then, follow the prompt.\n"
}
