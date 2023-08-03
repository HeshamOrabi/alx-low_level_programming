#include "main.h"

/**
 * get_bit - get bit at an index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}
