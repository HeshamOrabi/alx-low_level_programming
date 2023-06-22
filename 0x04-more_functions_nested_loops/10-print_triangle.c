#include "main.h"

/**
 * print_triangle - print a right angle triangle
 * @size: size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
