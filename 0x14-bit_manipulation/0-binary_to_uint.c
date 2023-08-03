#include "main.h"

/**
 * binary_to_uint - converts a binary number stored in str to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conval = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		conval = 2 * conval + (b[i] - '0');
	}
	return (conval);
}
