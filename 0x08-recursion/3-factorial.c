#include "main.h"

/**
 * factorial - calculates the factorial of a non-negative integer.
 * @n: the integer to calculate the factorial of.
 *
 * Return: the factorial of n, or -1 if n is negative.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
