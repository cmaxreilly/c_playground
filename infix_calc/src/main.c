/*
 * My hack at an infix calculator
 * 1st draft: Monday April 24, 2024
 * 2nd draft: Wednesday May 29.
 * 3rd draft: Monday November 11
 */
// Testing Parameters
#define TEST 0

/* Included libraries */
#include <stdio.h>

/* Function declarations */
int interactive_mode(void);
int commandline_mode(void);
void help_mode(void);

/* Main function */
int
main(int argc, char *argv[])
{
	if (argc == 1)
	{
		interactive_mode();
	}
	else if (argc == 2)
	{
		printf("invalid argument.\n");
		help_mode();
	} else if (argc == 3)
	{
		if (argv[1] == "-c")
			commandline_mode();
		else
			printf("invalid option\n");
	}

	return(0);
}

/* Function Definitions */
int
interactive_mode(void)
{
	printf("Enter expression at the prompt.\n >> ");
	return(0);
}

int
commandline_mode(void)
{
	printf("entering commandline mode\n");
	return(0);
}

void
help_mode(void)
{
	;
}
