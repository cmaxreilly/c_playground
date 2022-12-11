#include <stdio.h>
#include <string.h>

int main()
{
	char destination[] = "Hello ";
	char source[] = "World!";
	strcat(destination,source);
	printf("Concatenated String: %s\n", destination);
	return 0;
}
