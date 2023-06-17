#include <stdio.h>

/**
 * main - the starting function
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	int i;
	int n;

	for (n = 0; n<= 8; n++)
	{
		for (i = n + 1; i <= 9; i++)
		{
			putchar(n + '0');
			putchar(i + '0');

			if (n == 8 && i == 9)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
