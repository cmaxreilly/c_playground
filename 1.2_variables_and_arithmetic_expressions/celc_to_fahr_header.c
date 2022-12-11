#include <stdio.h>

/* A simple program that creates a table of temperatures in fahrenheit and temperatures in celcius*/

int main (){
	float fahr, celc;
	int step, lower, upper;	
	
	step = 20;
	lower = -40;
	upper = 500;
	celc = lower;	
	printf("Celcius    Fahrenheit\n");
	while (celc <= upper){
		fahr = ((9.0/5.0 * celc) + 32.0);
		printf("%5.0f%10.2f\n", celc, fahr);
		celc += step;
	}
}	       
	

