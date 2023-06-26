#include "main.h"

/**
 * swap_int - swap the values of tow integers
 * @a: addr that point first val
 * @b: addr that point to second val
*/
int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != 0; i++)
	{
		count += 1;
	}

	return (count);
}
