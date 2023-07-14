#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - concatenates str to n bytes of another str
 * @s1: in heap string to append to
 * @s2: string to concatenate from an n
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n < len2)
	{
		arr = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		arr = malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		arr[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		arr[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		arr[i++] = s2[j++];

	arr[i] = '\0';

	return (arr);

}
