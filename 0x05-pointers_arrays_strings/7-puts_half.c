#include "main.h"

/**
 * puts_half - printthe last half of str
 * @str: str pointer
*/
void puts_half(char *str)
{
	int i, j, k, len;

	len = 0;
	for (i = 0; str[i] != 0; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (k = (len - 1) / 2; k < len; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
