#include <stdio.h>
#include <math.h>

#define TEST 0

// function prototypes


int
main(void)
{
	return 0;
}


/*
 * Separates a number into three parts: a sign (+, -, or blank),
 * a whole number magnitude, and a fractional part.
 */
void separate(double	num,		/* input - value to be split			*/
		char	*signp,		/* output - sign of num				*/
		int	*wholep,	/* output - whole number magnitude of num	*/
		double	*fracp)		/* output - fractional part of num		*/
{
	double magnitude;		/* local variable - magnitude of num		*/
	
	/* Determines sign of num */
	if (num < 0)
		*signp = '-';
	else if (num == 0)
		*signp = ' ';
	else
		*signp = '+';

	/* Finds magnitude of num (its absolute value) and 
	 * separates it into whole and fractional parts					*/
	magnitude = fabs(num);
	*wholep = floor(magnitude);
	*fracp = magnitude - *wholep;
}
