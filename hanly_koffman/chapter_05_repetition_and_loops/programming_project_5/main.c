/*
 * Author: C. Maxwell Reilly
 * Started: Thursday, September 7
 * Finished: Tuesday, September 19
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
    int temp, hot = 0, moderate = 0, cold = 0;
    inp = fopen("temperatures.dat", "r");
    fscanf(inp, "%d", &temp);
    while (temp != 1000)
    {
        printf("%d", temp);
	if (temp >= 85)
	{
		printf(" : hot\n");
		hot++;
	} else if (temp < 85 && temp >= 60)
	{
		printf(" : moderate\n");
		moderate++;
	} else
	{
		printf(" : cold\n");
		cold++;
	}
        fscanf(inp, "%d", &temp);
    }
    printf("Number of cold days = %d\n", cold);
    printf("Number of moderate days = %d\n", moderate);
    printf("Number of hot days = %d\n", hot);

}



