/*
 *	Hofmans Daan
 *	University of Seoul
 *	Computer Science Department
 *	C Programming Lab Assignments
 *	LAB 8
 */

#include <stdio.h>

// This file has the power() function
#include "Helpers.hpp"

int main()
{
	// Some variables
	double x, n;
	
	// Just do this, eternally
	// or until someone presses ctrl + c
	while (true)
	{
		// Get the input for 'x'
		printf("x = ");
		if (scanf_s("%lf", &x) == EOF)
			break; // Stop if EOF is input

		// Get the input for 'n'
		printf("n = ");
		if (scanf_s("%lf", &n) == EOF)
			break; // Stop if EOF is input

		// Print a nice little happy result in the console.
		printf("%lf ^ %lf = %.7lf\n", x, n, power(x, n));
	}

	return 0;
}