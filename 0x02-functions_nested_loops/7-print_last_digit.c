#include "main.h"

/**
 * print_last_digit - prints the last digit of a number and returns it
 * @n: the number to extract the last digit from
 * Return: the last digit of the input number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	_putchar(ld + '0');

	return (ld);
}
