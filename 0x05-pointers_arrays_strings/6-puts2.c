#inclube "main.h"

/**
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
			_putchar(str[j]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
