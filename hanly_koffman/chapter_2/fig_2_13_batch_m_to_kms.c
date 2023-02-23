/* 
 * Converts distance in miles to kilometers
 * Programmer: Max Reilly
 * Feb 21, 2023
 */

#include <stdio.h>
#define KMS_PER_MILE 1.609

int main (void) {
	double miles,
	       kms;
	scanf("%lf", &miles);
	printf("The distance in miles is %.2f.\n", miles);
	kms = KMS_PER_MILE * miles;
	printf("That equals %.2f kilometers.\n", kms);

	return(0);
}
