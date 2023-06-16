#include <stdio.h>

/**
 * main - the starting function
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');
	return (0);
}
