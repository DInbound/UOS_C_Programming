/*
 *	Made by: Hofmans Daan
 *	2018/12/06
 *	Lab Assignment #11
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#include "Lab_11.hpp";

 /*
	Write a function that reads the contents of the entire file, stores it in an array, and returns a pointer to the array. 
	Make a program that counts the words in a file.
 */

 // Hover over readFile function definition name to see beautiful XML comments! (only works in VS)

/// <summary>Counts the amount of words in a string.</summary>
/// <param name="s">The string to count the words of.</param>
/// <returns>Returns the amount of words counted as a double.</returns>
double word_count(const char *s)
{
	double cnt = 0;

	while (*s != 0) {

		// Skip white spaces
		while (*s == ' ')
			++s;

		if (*s != 0) 
		{
			// Found a word
			++cnt;

			while (*s != ' ' && *s != 0)
			{
				// Skip to the end of the word
				++s;
			}
		}
	}

	return cnt;
}

/// <summary>Read a file from a desired path.</summary>
/// <param name="filePath">The path to the file to read.</param>
/// <returns>Returns a array of characters.</returns>
char * readFile(const char * filePath)
{
	FILE *file;
	file = fopen(filePath, "r");

	// Check for bad open
	if (!file)
	{
		printf("Cant read file");
		return 0;
	}

	// See where the end of the file is.
	fseek(file, 0, SEEK_END);
	int fileLength = ftell(file);

	// Create a string as large as the file
	char *string = (char *)malloc(fileLength + 1);

	// Return to the beginning
	fseek(file, 0, SEEK_SET);

	// Puts characters from file into string and returns amount of elements read
	fread(string, 1, fileLength, file);

	// Put a EOF marker at the end of the string
	string[fileLength] = 0;

	fclose(file);
	return string;
}

void Lab11_Exercise1()
{
	// Read file
	char * string = readFile("data.txt");

	// Check for bad values
	if (string != 0)
	{
		double words = word_count(string);
		printf("Word count: %.0lf\n", words);
	}

	free(string);
}