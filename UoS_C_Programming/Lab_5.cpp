/*
 *	Made by: Hofmans Daan
 *	2018/10/18
 *	Lab Assignment #5
 */
#include <stdio.h>

// Make an ASCII table using two nested for loops.
void Lab5_Exercise1()
{
	// Initialze some variables for the size of the table.
	const int START = 32;
	const int NROWS = 16;
	const int NCOLUMNS = 6;

	// Initialize a variable that will hold the value of the symbol.
	int symbol = START;

	// Use nested for loop to create tables starting from the start
	// Width = NCOLUMNS, Height = NROWS
	for (int j = START; j < START + NROWS; j++)
	{
		// Reset the symbol value to the start value of every row, incremented by one for every loop.
		symbol = j;

		// Print a row.
		for (int i = 0; i < NCOLUMNS; i++)
		{
			printf("%3d   %c   ", symbol, symbol);
			symbol += NROWS;
		}
		// Print a new line for beginning the new row on a new line.
		printf("\n");
	}
}