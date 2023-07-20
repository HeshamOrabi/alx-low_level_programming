#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters.
 * @n: The total number of parameters.
 * @...: A variable number of arguments to sum.
 *
 * Return: The sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num, sum;
	va_list args;

	if (n == 0)
	{
		return 0;
	}

	va_start(args, n);
	
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);

	return (sum);
}
