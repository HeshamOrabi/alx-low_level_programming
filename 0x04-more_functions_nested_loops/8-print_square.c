#include "main.h"

/**
 * print_square - print square of block tags
 * @size: size of square
*/
void print_square(int size)
{
	int cul, row;

	if (size > 0)
	{
		row = size;
		while (row--)
		{
			cul = size;
			while (cul--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
