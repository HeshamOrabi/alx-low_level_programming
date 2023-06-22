#include "main.h"

/*
 * more_numbers - print numbers from 0 to 14 for 10 times
*/
void more_numbers(void)
{
	int i, j;

	j = 10;
	while (j--)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
