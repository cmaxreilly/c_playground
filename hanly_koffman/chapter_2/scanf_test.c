#include <stdio.h>

int main () {
	char letter_1, letter_2, letter_3;
	printf("Hello! Enter three or more letters\n");
	scanf("%c%c%c", &letter_1, &letter_2, &letter_3);
	printf("Your letters are: %c, %c, and %c.\n", letter_1, letter_2, letter_3);
	return (0);
}


