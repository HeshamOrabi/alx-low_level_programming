#include "main.h"

/**
 * puts2 - print only spasific char of str
 * @str: char arry str
*/
void puts2(char *str)
{
	int i, j, len;

	for (i = 0; str[i] != 0; i++)
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j] + '0');
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
