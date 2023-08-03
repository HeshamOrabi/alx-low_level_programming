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
	if (n & (1 << index))
		return (n & (1 << index));
	return (-1);
}
