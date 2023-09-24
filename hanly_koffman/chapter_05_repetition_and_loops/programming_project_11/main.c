/*
 * Author: C. Maxwell Reilly
 * Started: Saturday, September 23
 * Finished: 
 */


#include <stdio.h>
#include <math.h>

#define TEST 0
#define PI 3.1415962

// function prototypes


int
main(void)
{
	
	int initial_step_size, number_of_lines, i, spaces;
	double radians;
	printf("Enter initial step size in degrees >> ");
	scanf("%d", &initial_step_size);
	printf("Enter number of lines of the graph to display >> ");
	scanf("%d", &number_of_lines);
	radians = initial_step_size * (PI / 180);
	for ( 		i = 0;
			i <= number_of_lines;
			i++)
	{
		spaces = 50 * sin(radians * i) + 60;
		printf("%*c*\n", spaces , ' ');
	}
	return 0;
}

