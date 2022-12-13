#include <stdio.h>

int main(){
	int c, ns, nt, nl;

	ns = nt = nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++nt;
		else if (c == ' ')
			++ns;
	printf("%d new lines\n", nl);
	printf("%d spaces\n", ns);
	printf("%d tabs\n", nt);
	
	return 0;
}

	
