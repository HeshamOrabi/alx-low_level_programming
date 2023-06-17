#include <stdio.h>

/**
 * main - the starting function
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	int i, n, u;

	for (n = 0; n <= 7; n++)
	{
		for (i = n + 1; i <= 8; i++)
		{
			for (u = i + 1; u <= 9; u++)
			{
				putchar(n + '0');
				putchar(i + '0');
				putchar(u + '0');

				if (n == 7 && i == 8 && u == 9)
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
	}

	putchar('\n');
	return (0);
}
