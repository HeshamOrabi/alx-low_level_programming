#include <stdlib.h>
#include <stdio.h>
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
	int i = 0, l = 0, j;
	char *arr;

	if (n > strlen(s2))
	{
		n = strlen(s2);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l] != '\0')
	{
		l++;
	}

	arr = malloc(sizeof(char) * (l + n + 1));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		arr[i] = s2[j];
	}
	arr[i] = '\0';

	return (arr);
}
