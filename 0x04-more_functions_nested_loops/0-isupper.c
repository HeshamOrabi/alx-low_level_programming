#include "main.h"

/**
 * _isupper - to check upper case
 * @c: int represent ASCII
 * Return: 1 if upper and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
