#include "main.h"

/**
 * flip_bits - counts of chaged bit
 * @n: number
 * @m: number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int val;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		val = ex >> i;
		if (val & 1)
			count++;
	}

	return (count);
}
