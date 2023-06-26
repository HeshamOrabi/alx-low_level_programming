#include "main.h"

/**
 * swap_int - swap the values of tow integers
 * @a: addr that point first val
 * @b: addr that point to second val
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
