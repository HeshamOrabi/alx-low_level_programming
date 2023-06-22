#include "main.h"

/**
 * print_line - print a line
 * @n: number of lines
 *
*/
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
