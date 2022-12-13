#include <stdio.h>

int main(){
	int c, b;

	b = 0;	

	while ((c = getchar()) != EOF)
		if (c =! ' ')
			putchar(c);
			c = getchar();
			b = 0;

		if (c == ' ' && b == 0)
			putchar(c);
			c = getchar();
			b = 1;
			
		if (c == ' ' && b == 1)
			c = getchar();
			b = 1;
	
	
	return 0;
}

	
