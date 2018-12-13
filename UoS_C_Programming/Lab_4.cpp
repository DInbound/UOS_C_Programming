/*
 *	Programmed by: Hofmans Daan
 *	2018/10/11
 *	Lab Assignment #4
 */
#include <stdio.h>

// Pragma is an editor function (VS2017).
// region is an function to create a collaplsible region in the editor.
#pragma region Exercise 1
// Exercise Description.
// Input an integer from the keyboard.
// Write a function to calculate the factorial of the number.
// Make sure to put enough comments.

// I use XML comments for functions because these give extra information to IntelliSense when programming. 
// Try typing "CalculateFactorial(" inside the Lab4_Exercise1() function and look at the tooltip that pops up.
/// <summary>
/// Calculate the factorial of the number given.
/// </summary>
/// <param name="input">Input the number to calculate the factorial of.</param>
/// <returns>The factorial of the given number.</returns>
int CalculateFactorial(int input)
{
	// Initialize a variable to hold the result to 1. This will be multiplied by the first number.
	int factorial = 1;

	// We need to give feedback to the user, so we print some mathematical equation
	printf("%d! = ", input);

	// Create a loop and start with the number to calculate the factorial of.
	// For each repeat multiply the factorial variable with the index i and substract one of the index.
	// Escape from the loop when index is 0.
	for (int i = input; i > 0; i--)
	{
		factorial = factorial * i;

		// Add another number to the equation. If we are at the last number (1) then dont print a "x" behind it.
		if (i > 1)
			printf("%d x ", i);
		else
			printf("%d", i);
	}

	// If our number is 1 then printing the below line is unneeded.
	if (input > 1)
	{
		printf(" = %d", factorial);
	}

	// We shall now return the calculated factorial value of the input.
	return factorial;
}

// A function to contain code to kickstart this exercise from the main file.
void Lab4_Exercise1() 
{
	// Make variable for input and initialize it to 0, output will be 0 if something went wrong with scanning.
	int input = 0;
	// Ask the user nicely to give us a integer number.
	printf("Input a single positive integer to calculate the factorial of (results cannot be guaranteed if something else is used):   ");
	// Scan the number that the user gave to us and put it in the input variable. 
	// I use the safe version of the scan to make sure we stay safe.
	scanf_s("%d", &input);
	// Call the CalculateFactorial() function.
	CalculateFactorial(input);
}
#pragma endregion