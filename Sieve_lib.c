// Header Files
#include "Sieve_lib.h"

// Functions

	// Introduce the program
void introduce()
{
	// Print statments
	printf("Welcome to The Seive of Eretosthanes!\n");
	printf("=====================================\n\n");
	printf("The Seive of Eretosthanes is an algorhythm that calculates 
		primes between 0 and a given number.\n\n");
}

	// Ask for maximum number from the user
void ask_maximum()
{
	// Print statment asking for input
	printf("Input a number greater than 0.\n");
	printf("Note: the larger the number, the longer processing will take.\n");
	printf("Time complexity: O(nloglogn)\n");
}
	// Read maximum number from the user
int read_maximum()
{
	// create maximum variable
	int maximum;
	// scan input
	scanf("%d", &maximum);
	// return input
	return maximum;
}
	// Calculate primes within 0 to maximum
int calculate()
{
	//
}

	// Output primes to user
