#include <stdio.h>

/**
 * main - the starting function
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
		{
			continue;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
