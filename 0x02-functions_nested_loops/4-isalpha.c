#include "main.h"

/**
 * _isalpha - check the num if lower
 * @c: integer number used to make the compaaring method
 * Return: 1 if c is lowercase and 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c>= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
