/*
 * Author: C. Maxwell Reilly
 * Started: Thursday, September 20
 * Finished:
 */


#include <stdio.h>

#define TEST 0

// function prototypes


int
main(void)
{
	char input;
	printf("press q to quit\n");
	printf("Enter input >> ");
	scanf(" %c", &input);
	while (input != 'q')
	{
		printf("You entered %c. Enter q to quit. >> ", input);
		scanf(" %c", &input);
	}
    return 0;
}

