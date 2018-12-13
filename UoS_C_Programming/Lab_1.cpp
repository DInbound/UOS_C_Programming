#include <stdio.h>

#pragma region Exercise 1
// 1. Declare three integer variables and assign any numbers to the variables. Write a code to find the maximum of the three.

void Lab1_Exercise1()
{
	printf("L1 EX1\n");

	int a = 20;
	int b = 13;
	int c = 46;

	if (a > b)
	{
		if (a > c)
		{
			printf("A (%d) is biggest!", a);
		}
		else
		{
			printf("C (%d) is biggest!", c);
		}
	}
	else if (b > c)
	{
		printf("B (%d) is biggest!", b);
	}
	else
	{
		printf("C (%d) is biggest!", c);
	}

	// OR //
	printf("\n");

	if (a > b && a > c)
	{
		printf("A (%d) is the largest number", a);
	}
	else if (b > a && b > c)
	{
		printf("B (%d) is the largest number", b);
	}
	else if (c > a && c > b)
	{
		printf("C (%d) is the largest number", c);
	}

	printf("\n\n");
}
#pragma endregion

#pragma region Exercise 2
// 2. Calculate 3 + 6 + 9 + 12 + 15 + 18 + 21 + 24 + 27

void Lab1_Exercise2()
{
	printf("L1 EX2\n");

	int Sum = 0;
	for (int i = 3; i <= 27; i = i + 3)
	{
		Sum = Sum + i;
		//printf("Value of i: %d, Sum: %d\n", i, Sum);
	}
	printf("Result = %d\n", Sum);
}
#pragma endregion