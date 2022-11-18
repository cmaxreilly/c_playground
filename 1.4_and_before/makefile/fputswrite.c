#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("fputs_test.txt", "w+");
	fputs("This is my first hack at fptus,\n", fp);
	fputs("We don't need to use a for loop\n", fp);
	fputs("Easier than fputc function\n", fp);
	fclose(fp);
	return (0);
}
