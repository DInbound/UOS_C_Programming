#include <stdio.h>

#pragma region Exercise 1
// 3. Write a function to find the maximum of the three integers.

int find_max(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a; // A is bigggest
	}
	else if (b > a && b > c)
	{
		return b; // B is biggest
	}
	else if (c > a && c > b)
	{
		return c; // C is biggest
	}
}

void Lab2_Exercise1()
{
	printf("L2 EX1\n");

	int a = 37;
	int b = 82;
	int c = 25;

	// max_value will contain the biggest of the three numbers
	int max_value = find_max(a, b, c);
	printf("Max value = %d\n", max_value);
}
#pragma endregion
	
#pragma region Exercise 2

int calc_average(int * array, int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum = sum + array[i];
	}
	return sum / length;
}

void Lab2_Exercise2()
{
	printf("L2 EX2\n");

	const int ARRAY_LENGTH = 10;
	int array[ARRAY_LENGTH] = { 3,8,10,4,5,14,1,2,6,5 };

	int average = calc_average(array, ARRAY_LENGTH);
	printf("Average = %d\n", average);
}
#pragma endregion