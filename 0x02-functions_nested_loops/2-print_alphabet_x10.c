#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	char ltr;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar(ltr);
		}

		_putchar('\n');
	}

}
