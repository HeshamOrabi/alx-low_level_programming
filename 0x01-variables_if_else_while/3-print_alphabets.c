#include <stdio.h>

/**
 * main - the starting function
 *
 * Return: is always 0 (success)
*/
int main(void)
{
	char ch1, ch2;

	ch1 = 'a';
	while (ch1 <= 'z')
	{
		putchar(ch1);
		ch1++;
	}

	ch2 = 'A';
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}

	putchar('\n');
	return (0);
}
