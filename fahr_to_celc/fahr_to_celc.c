#include <stdio.h>

/* A simple program that creates a table of temperatures in fahrenheit and temperatures in celcius*/

int main (){
	int fahr, celc;
	int step, lower, upper;	
	
	step = 20;
	lower = -40;
	upper = 500;
	fahr = lower;	
	while (fahr <= upper){
		celc = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celc);
		fahr += step;
	}
}	       
	

