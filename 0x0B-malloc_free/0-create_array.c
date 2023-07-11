#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array, and initializes it with a char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or if malloc fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
