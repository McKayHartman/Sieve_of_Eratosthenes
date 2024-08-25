// Header Files
#include "Sieve_lib.h"
// Functions

	// Introduce the program
void introduce()
{
	// Print statments
	printf("Welcome to The Seive of Eretosthanes!\n");
	printf("=====================================\n\n");
	printf("The Seive of Eretosthanes is an algorhythm that calculates");
	printf("primes between 0 and a given number.\n\n");
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
void calculate(int n, bool* arr)
{
	// Loop through indexes
	for(int i = 2; i * i < n; i++)
	{
		// Check if current index is set to true
		if(arr[i] == true)
		{
			// Loop through the rest of the array
			for(int j = i*i; j < n; j += i)
			{
				// Because arr[j] is a multiple, it is set to false
				arr[j] = false;
			}
		}
	}
}

	// Output primes to user
void list_primes(bool* primes_array, int n)
{
	// Print message to user
	printf("\n\nHere are the primes: ");
	// loop through primes array
	for(int i = 2; i < n; i++)
	{
		// Check if element is true
		if(primes_array[i] == true)
		{
			// If true, then print out the number
			printf("%d\t", i);

		}
	}
}

