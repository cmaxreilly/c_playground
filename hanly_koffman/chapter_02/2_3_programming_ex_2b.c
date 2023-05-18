#include <stdio.h>
#define PI 3.14159


int main () {
	double radius, area;
	printf("Enter the radius of a circle: \n");
	scanf("%lf", &radius);
	area = radius * PI;
	printf("A circle with radius %f is %f.\n", radius, area);
	return (0);
}


