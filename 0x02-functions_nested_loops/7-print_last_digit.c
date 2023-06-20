#include "main.h"

/**
 * print_last_digit - its in the name
 * @n: integertoprint last num
 * Return: 0
*/
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	_putchar(ld + '0');
	_putchar('\n');

	return (0);
}
