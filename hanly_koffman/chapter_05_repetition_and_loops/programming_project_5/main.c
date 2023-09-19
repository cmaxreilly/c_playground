/*
 * Author: C. Maxwell Reilly
 * Started: Thursday, September 7
 * Finished: Monday, September 18
 */


#include <stdio.h>

#define TEST 0

// function prototypes

void process_data(void);

int
main(void)
{
    process_data();
    return 0;
}


void
process_data(void)
{
    FILE *inp;
    int temp;
    inp = fopen("temperatures.dat", "r");
    fscanf(inp, "%d", &temp);
    while (temp != 1000)
    {
        printf("%d\n", temp);
        fscanf(inp, "%d", &temp);
    }

}

