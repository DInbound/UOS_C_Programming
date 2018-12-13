#include <stdio.h>

#include "Helpers.hpp"

// This function calculates the power of two numbers just like that one math library
double power(double x, double n)
{
	double ans = x;
	for (int i = 1; i < n; i++)
	{
		ans *= x;
	}
	return ans;
}