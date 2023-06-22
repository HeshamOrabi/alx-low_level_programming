#include "main.h"

/**
 * _isdigit - to check if digit
 * @c: int to check
 * Return: 1 if digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
