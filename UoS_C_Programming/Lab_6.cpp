/*
 *	Made by: Hofmans Daan
 *	2018/10/25
 *	Lab Assignment #6
 */
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void Lab6_Exercise1()
{	
	// Instantiate constant values
	const double TWO_PI = 2.0 * M_PI;
	const double INCREMENT = 0.1;
	// Scale determines how wide the sine wave will be
	const double SCALE = 30.0;

	// Loop through a full wave (two pi) worth of values with the specified incrementation
	for (double i = 0.0; i < TWO_PI; i += INCREMENT)
	{
		// Calculate the current sine value, add one to remove negative values and scale it up so it is nicer too look at on the screen.
		double current = (sin(i) + 1) * SCALE;

		// Print the amount of spaces equal to the current value in current (rounded down)
		for (int j = 0; j <= (int)current; j++)
		{
			printf(" ");
		}
		
		// Add the star and go to a new line to repeat
		printf("*\n");
	}
	


}