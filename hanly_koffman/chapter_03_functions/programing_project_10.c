/* 
 * The ratio between successive speeds of a six-speed gearbox (assuming that
 * the gears are evenly spaced to allow for whole teeth) is
 * fifth_root(M/m)
 * where M is the maximum speed in revolutions per minute and m is the mini-
 * mum speed. Write a function speeds_ratio that calculates this ratio for 
 * any maximum and minimum speeds. Write a main function that prompts for 
 * maximum and minimum speeds (rpm), calls speeds_ratio to calculat
 * the ratio, and displays the results in a sentence of the form
 *
 * The ratio between successive speeds of a six-speed gearbox
 * with maximum speed _____ rpm and minimum spedd _____ rpm 
 * is _____.
 *
 * Author: C. Maxwell Reilly
 *
 * Date: April 25, 2021
 */

#include<stdio.h>
#include<math.h>
int max_speed, min_speed;

double ratio;

double speeds_ratio(int min_speed, int max_speed);

int
main(void)
{
    printf("This program takes a maximum and minimum speed for a gearbox and spits out the ratio.\n");
    printf("\nEnter the minimum speed in RPM >> ");
    scanf("%d", &min_speed);
    printf("Enter maximum speed in RPM >> ");
    scanf("%d", &max_speed);
    printf("\nFor a minimum speed of %d and a maximum speed of %d, your ratio will be %.2lf\n", min_speed, max_speed, speeds_ratio(min_speed, max_speed));
    return (0);
}

double
speeds_ratio(int min_speed, int max_speed)
{
    double ratio;
    ratio = pow((max_speed/min_speed), 1.0 / 5.0);
    return(ratio);
}
