#include <stdio.h>

#pragma region Exercise 1
// Write a function to find the maximum of n integers

int findMax(int array[], int length)
{
	int max = -1;

	for (int i = 0; i < length; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	return max;
}

void Lab3_Exercise1()
{
	printf("L3 EX1\n");
	
	const int ARRAY_LENGTH = 10;
	int array[ARRAY_LENGTH] = { 3,8,10,4,5,14,1,2,6,5 };
	
	int maxValue = findMax(array, ARRAY_LENGTH);
	printf("The max value is: %d\n", maxValue);
}
#pragma endregion

#pragma region Exercise 2
// Write a function to find the index of the maximum of n integers

int findMaxIndex(int array[], int length)
{
	int max = -1;
	int index = -1;

	for (int i = 0; i < length; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			index = i;
		}
	}

	return index;
}

void Lab3_Exercise2()
{
	printf("L3 EX2\n");

	const int ARRAY_LENGTH = 10;
	int array[ARRAY_LENGTH] = { 3,8,10,4,5,14,1,2,6,5 };

	int maxValue = findMax(array, ARRAY_LENGTH);
	int maxIndex = findMaxIndex(array, ARRAY_LENGTH);
	printf("The index of the max value(%d) is: %d\n", maxValue, maxIndex);
}
#pragma endregion