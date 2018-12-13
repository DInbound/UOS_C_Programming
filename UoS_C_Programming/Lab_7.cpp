/*
 *	Made by: Hofmans Daan
 *	2018/10/25
 *	Lab Assignment #7
 */
#include <stdio.h>

/*
	Write a program that reads characters form the standard input file until EOF is encountered
	Use the variables digit_cnt and other cnt to count the number of digits and the number of other characters, respectively
	Write the code in two versions one using only for loops and the other using only while loops.
 */
void Lab7_ForLoops()
{
	// Instantiate some trackers for the character types we want to track.
	int Count = 0;
	int SmallLetterCount = 0;
	int CapitalLetterCount = 0;
	int DigitCount = 0;
	int SpecialCharacterCount = 0;
	int NewLineCount = 0;

	// instantiate input character variable
	char c;
	
	// Read characters until EOF is reached
	for (; (c = getchar()) != EOF; )
	{
		// For each character do:

		// Increase the total
		Count++;

		// Check what category the character falls in
		if (c >= '0' && c <= '9')
		{
			// c is a number (0 - 9)
			DigitCount++;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			// c is a captial letter
			CapitalLetterCount++;
		}
		else if (c >= 'a' && c <= 'z')
		{
			// c is a small letter
			SmallLetterCount++;
		}
		else
		{
			if (c == '\n')
			{
				// c is a newline
				NewLineCount++;

				// Only delivering a result on a newline decreases the amount of spam
				printf("You typed %d characters!\n", Count);
				printf("Digits: %d \nCapital Letters: %d \nSmall Letters: %d \nSpecial Characters: %d \nNewLines: %d\n\n", DigitCount, CapitalLetterCount, SmallLetterCount, SpecialCharacterCount, NewLineCount);
			}
			else 
			{
				// c is a special character
				SpecialCharacterCount++;
			}
		}
	}
}

void Lab7_WhileLoops()
{
	// instantiate some trackers for the types of characters we want to track
	int Count = 0;
	int SmallLetterCount = 0;
	int CapitalLetterCount = 0;
	int DigitCount = 0;
	int SpecialCharacterCount = 0;
	int NewLineCount = 0;

	// instantiate a variable for the read character
	char c;
	// Read character until EOF is reached
	while ((c = getchar()) != EOF)
	{
		// For each character do: 

		// Increment total characters
		Count++;

		// Check what category the character falls in
		if (c >= '0' && c <= '9')
		{
			// c is a number (0 - 9)
			DigitCount++;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			// c is a captial letter
			CapitalLetterCount++;
		}
		else if (c >= 'a' && c <= 'z')
		{
			// c is a small letter
			SmallLetterCount++;
		}
		else
		{
			if (c == '\n')
			{
				// c is a newline
				NewLineCount++;

				// Only delivering a result on a newline decreases the amount of spam
				printf("You typed %d characters!\n", Count);
				printf("Digits: %d \nCapital Letters: %d \nSmall Letters: %d \nSpecial Characters: %d \nNewLines: %d\n\n", DigitCount, CapitalLetterCount, SmallLetterCount, SpecialCharacterCount, NewLineCount);
			}
			else 
			{
				// c is a special character
				SpecialCharacterCount++;
			}
		}
	}
}

