#include "main.h"

/**
 * print_alphabet - prints the alphabets
 *
 * Return: nothing
*/
void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar('\n');
}
