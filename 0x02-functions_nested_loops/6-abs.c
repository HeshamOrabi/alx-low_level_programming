#include "main.h"

/**
 * _abs - is a function to get the absolute
 * @n: the integer number to check
 * Return: -n if n < zero, else return n
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
