#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char d, unsigned int n)
{

	for (i = 0; i < n; i++)
	{
		s[i] = d;
	}

	return (s);
}

/**
 * *_calloc - allocates memory 
 * @nmemb: count of elements 
 * @size: size of element
 *
 * Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	_memset(arr, 0, nmemb * size);

	return (arr);
}
