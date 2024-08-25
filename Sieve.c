// Header Files
#include "Sieve_lib.h"

// Main Function
int main()
{

	// Create variables
	bool primes_array[MAX_SIZE] = { true };
	// Introduce the program
	introduce();
	// Ask user for maximum integer
	ask_maximum();
	// Read user input and store in int variable
	int maximum = read_maximum();
	// Calculate primes
	calculate(maximum, primes_array);
	// List out the primes to the user
	list_primes(primes_array, maximum);
	// Return success
	return 0;
}