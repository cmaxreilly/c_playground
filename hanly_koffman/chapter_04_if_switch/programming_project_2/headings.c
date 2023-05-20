/********************************************************************************
* While spending the summer as a surveyor's assistant, you decide to write a    *
* program that transforms compass headings in degrees (0 to 360) to compass     *
* bearings. A compass bearing consistes of three items: the direction you       *
* turn before walking (east or west). For example, to get the bearing for a     *
* compass heading of 110.0 degrees, you would first face due south (180)        *
* degrees) and then turn 70.0 degrees east (180.0 -70.0 = 110.0). Therefore,    *
* the bearing is South 70.0 degrees East. Be sure to check the input for invalid*
* compass headings                                                              *
*********************************************************************************/

/********************************************************************************
 * Author: C. Maxwell Reilly                                                    *
 * Date: Friday May 19, 2023                                                    *
 ********************************************************************************/

// Libraries
#include<stdio.h>

int
main(void)
{
    int heading; /* Compass heading in degrees */
    char direction_faced, direction_turned;
    int angle;

    printf("Enter your fucking heading you stupid fuck >> ");
    scanf("%d", &heading);
    if (heading == 0)
        printf("North\n");
    else if (heading > 0 && heading <= 90)
        printf("North, %d degrees West\n", heading);
    else if (heading > 90 && heading < 180)
        printf("South, %d degrees West\n", 180 - heading);
    else if (heading == 180)
        printf("South\n");
    else if (heading > 180 && heading < 270)
        printf("South, %d degrees East\n", heading - 180);
    else if (heading >= 270 && heading < 360)
        printf("North, %d degrees East\n", 360 - heading);
    else
        printf("fuck you\n");
    return(0);
}








