#include <stdio.h>

char ruler1 = {'1'};
char ruler2 = {ruler1 + ' 2 ' + ruler1};
char ruler3 = {ruler2 + ' 3 ' + ruler2};
char ruler4 = {ruler3 + ' 4 ' + ruler3};

int main(){
	printf( "%d", ruler1) ;
	printf( "%d", ruler2) ;
	printf( "%d", ruler3) ;
	printf( "%d", ruler4) ;
	return (0);
}
