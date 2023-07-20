#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int rnum;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		rnum =	va_arg(args, int);
		if (i == (n - 1) || separator == NULL)
		{
			printf("%d", rnum);
		}
		else
		{
			printf("%d%s", rnum, separator);
		}
	}
	printf("\n");
}
