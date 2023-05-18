/* Write a program that takes the lenght and width of a rectangular yard and the length and width of a rectangular
 * house situated in the yard. Your program should compute the time required to cut the grass at the rate of two
 * square feet per second
 * Author: Maxwell Reilly
 * Date: Feb 24
 */

#include <stdio.h>
# define MOWING_RATE 2 /* Square feet per second */

int main (void) {
    int yard_len, yard_wid, house_len, house_wid;
    int mow_time;
    printf("Enter the dimensions of your rectangular yard.\nlength>>\n");
    scanf("%d", &yard_len);
    printf("width >>\n");
    scanf("%d", &yard_wid);
    printf("GOOOOOD. Very good. Now enter the dimensions of your totally normal rectangular house.\nlenght >>\n");
    scanf("%d", &house_len);
    printf("width >>\n");
    scanf("%d", &house_wid);
    mow_time = ((yard_len * yard_wid) - (house_len * house_wid)) / MOWING_RATE;
    printf("Your yard will take %d minutes and %d seconds to mow.\n", mow_time / 60, mow_time % 60);
    return(0);
}
