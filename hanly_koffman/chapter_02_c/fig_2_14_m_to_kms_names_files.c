/* Converts distances from miles to kilometers.
 * Max Reilly
 * Feb 21, 2023.
 * Copies from Hanly and Koffman
 */

#include <stdio.h>

#define KMS_PER_MILE 1.609

int main (void) {
	double miles,
	       kms;
	FILE *inp,
	     *outp;

	inp = fopen("b:distance.dat", "r");
	outp = fopen("b:distance.out", "w");

	fscanf(inp, "%lf", &miles);
	fprintf(outp, "The distance in miles is %.2f.\n", miles);

	kms = KMS_PER_MILE * miles;

	fprintf(outp, "That equals %.2f kilometers.\n", kms);

	fclose(inp);
	fclose(outp);

	return (0);
}
