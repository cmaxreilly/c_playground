#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// To understand how it works we simply have to remember that :
//
// 	- argc : number of arguments (1 by default which is the name of the program)
// 	- argv : arguments values
//
int main(int argc,char *argv[]){
	if(argc==1){
		printf("\n\nNo flag \n\n");
	}

	else if((strcmp(argv[1],"-f"))==0 && argc ==3){
		
		char* argument = argv[2];
		
		printf("\n\nCongrats! You just used the flag -f with the %s argument\n\n", argument);
	}
	
	else{
		printf("\n\nUsage: flags -f <arguments>\n\n");
	}
	
	return 0;
}
