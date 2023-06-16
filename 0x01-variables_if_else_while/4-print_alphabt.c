#include <stdio.h>

/**
 * main - the starting function
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}

	putchar('\n');
	return (0);
}
