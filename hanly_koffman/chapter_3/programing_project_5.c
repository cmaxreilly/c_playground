/* 
 * Hanly and Koffman programing exercise 5 from chapter 3.
 *
 * Four track stars have entered a mile race at Penn Relays. Write a pro-
 * gram that scans in the race time in minutes (minutes) and seconds (sec-
 * onds) for a runner and computes and displays the speed in feet per second
 * (fps) and in meters per second (mps). (Hints: There are 5280 feet in one 
 * mile, and one kilometer equals 3,282 feet.) Write and call a function that dis-
 * plays instructions to the program user. Run the program for each star's data.
 * |Minutes     |Seconds
 * |3           |52.83
 * |3           |59.83
 * |4           |00.03
 * |4           |16.22
 *
 * Author: C. Maxwell Reilly
 *
 * Date Started: Wednesday April 5
 *
 * Date Completed:
 *
 */

#define M_PER_MILE 3282
#define FT_PER_MILE 5280

#include<stdio.h>

double calc_fps(double min, double sec);
double calc_mps(double min, double sec);
void instruct(void);
void red(void);

double min, sec;

int
main(void)
{
    instruct();
    printf("\nYour speed was %.2f in feet per second, and  %.2f meters per second.\n\n", calc_fps(min, sec), calc_mps(min, sec));
    return(0);
}

double
calc_fps(double min, double sec)
{
    double time, speed;
    time = min * 60 + sec;
    speed = FT_PER_MILE / time;
    return(speed);
}

double
calc_mps(double min, double sec)
{
    double time, speed;
    time = min * 60 + sec;
    speed = M_PER_MILE / time;
    return(speed);
}

void
instruct(void)
{
    printf("This program takes a time for a mile run in minutes and seconds and returns");
    printf("\nthe speed of the mile run in miles per hour and kilometers per hour.\n\n");
    printf("Enter minutes >> ");
    scanf("%lf", &min);
    printf("Enter seconds >> ");
    scanf("%lf", &sec);
}

void
red(void)
{
    printf("\033[1;31m]");
}
