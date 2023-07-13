#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 * @b: num aof int
 *
 * Return: a void pointer or 98 if fail
*/
void *malloc_checked(unsigned int b)
{
	void *tmp;

	tmp = malloc(b);

	if (tmp == NULL)
	{
		exit(98);
	}
	else
	{
		return (tmp);
	}
}
