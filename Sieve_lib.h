// Header Files
#ifndef Sieve_lib
#define Sieve_lib
	// libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Constants
#define MAX_SIZE 9999999


// Function Prototypes

/**
 * Name: introduce_program
 * Process: Displays a message to the user explaining the algorythm
 * Function input/parameters: none
 * Function output/parameters: none         
 * Function output/returned: none
 * Dependencies: none
 **/
void introduce();

/**
 * Name: ask_maximum
 * Process: asks user for input on maximum number
 * Function input/parameters: none
 * Function output/parameters: none         
 * Function output/returned: none
 * Dependencies: none
 **/
void ask_maximum();

/**
 * Name: read_maximum
 * Process: checks user input a valid number (>0) and stores it.
 * Function input/parameters: none
 * Function output/parameters: none         
 * Function output/returned: maximum
 * Dependencies: none
 **/
int read_maximum();

/**
 * Name: calculate
 * Process: calculates all primes and stores them in a list
 * Function input/parameters: zero_to_n_array
 * Function output/parameters: primes_array         
 * Function output/returned: none
 * Dependencies: none
 **/
void calculate(int maximum, bool* primes_array);

/**
 * Name: list_primes
 * Process: outputs detected primes to user
 * Function input/parameters: primes_array
 * Function output/parameters: none         
 * Function output/returned: none
 * Dependencies: none
 **/
void list_primes(bool* primes_array, int maximum);

#endif