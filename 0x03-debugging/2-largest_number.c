#include "main.h"

/**
 * largest_number - largest number
 * @a: first num
 * @b: second num
 * @c: third num
 * Return: l
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (a >= b && a >= c)
	{
		l = a;
	}
	else if (b >= a && b >= c)
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}
