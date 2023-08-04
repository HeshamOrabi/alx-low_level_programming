#include "main.h"

/**
 * clear_bit - sets val to 0
 * @n: pointer to the number
 * @index: bit to clear
 *
 * Return: 1, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (*n & ~(1UL << index));
	return (1);
}
