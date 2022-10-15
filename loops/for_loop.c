#include <stdio.h>

int main()
{
	int x;
	/* the loop goes while x < 10, and x increases by one every loop. */
	for ( x = 0; x < 10; x++ ) {
		/* Keep in mind that the loop condidtion checks the conditional statement before it loops again.
		Consequently, when x equals 10 the loop breaks
		x is updated before the condition checks */
		printf( "%d\n", x );
	}
	getchar();
}
