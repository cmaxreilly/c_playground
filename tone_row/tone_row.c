// C program to print a tone row to the command line. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// A utility function to swap to intergers

void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A utility function to print an array
void printArray (int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// A function to generate a random permutation of arr []
void randomize ( int arr [], int n )
{
	//Use a different seed value so that we don't get the same 
	//result each time we run this program
	srand ( time(NULL) );

	// Start from the last element and swap one by one. We don't need to run for the first element that's why i > 0
	for (int i = n-1; i > 0; i--)
	{
		// Pick a random index from 0 to i
		int j = rand() % (i+1);

		// Swap arr[i] with the element at random index
		swap(&arr[i], &arr[j]);
	}
}


// Driver program to test above functions.

int main(int argc, char *argv[])
{
	// Help message. 
	char help[] = 
		"\n\nfunction usage:\n"
		"		-h: Prints this help message\n"
		"		-r: Prints a tone row\n"
		"		-r [int] prints the specified number of tone rows\n";

	// instantiating an array of twelve tones, representing the chromatic scale.	
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, };
	int n = sizeof(arr)/ sizeof(arr[0]);

	//prints the help message if command is called with no args
	if(argc==1){
		printf("%s", help);
	}

	//prints the help message if the -h flag is used

	else if((strcmp(argv[1],"-h"))==0 && argc == 2){
		printf("%s", help);
	}

	// Prints random tone row if -r flag is used

	else if ((strcmp(argv[1], "-r"))==0 && argc ==2){	
		randomize (arr, 12);
		printArray(arr,12);
	}

	// Prints number of tone rows specified by argv[2] if -r flag is used

	else if ((strcmp(argv[1], "-r"))==0 && argc ==3){
		int i;	
		int a;
		i = atoi(argv[2]);
		for( a = 0; a < i; a = a + 1 ){
			randomize (arr, 12);
			printArray(arr, 12);
		}
	}

	return 0;
}
