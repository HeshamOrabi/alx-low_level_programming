#include "main.h"

/**
 * print_sign - is a function to print a sign og a number
 * @n: the integer number to check
 * Return: 1 if n >  zero, 0 if n == zero, and -1 if n < zero
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
