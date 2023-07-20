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
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

