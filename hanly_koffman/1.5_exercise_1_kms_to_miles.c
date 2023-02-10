/*
 * Converts kilometer to miles 
 */

#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void) {
	double miles,
	       kms;

	/* Get the distance in kilometers */
	printf("Enter the distance in kilometers > ");
	scanf("%lf", &kms);

	/* Convert the distance to miles. */
	miles = kms/KMS_PER_MILE  ;

	/* Display the distance in miles. */
	printf("That equals %f miles.\n", miles);

	return (0);
}
