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
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
