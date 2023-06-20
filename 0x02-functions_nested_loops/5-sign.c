#include "main.h"

/**
 * print_sign - is a function to print a sign og a number
 * @n: the integer number to check
 * Return: 1 if n >  zero, 0 if n == zero, and -1 if n < zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
