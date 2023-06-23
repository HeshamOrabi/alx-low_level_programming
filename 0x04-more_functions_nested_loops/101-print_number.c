#include "main.h"

/**
 * print_number - print with recursive function call
 * @n: number to be printed
*/
void print_number(int n)
{
	unsigned int un;

	if (n < 0)
	{
		un = -n;
		_putchar('-');
	}
	else
	{
		un = n;
	}

	if (un / 10)
	{
		print_number(un / 10);
	}

	_putchar(un % 10 + '0');
}
