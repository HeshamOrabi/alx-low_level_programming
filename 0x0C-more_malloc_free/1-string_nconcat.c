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
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n > s2_len)
	{
		n = s2_len;
	}

	arr = malloc(s1_len + n + 1);

	if (arr == NULL)
	{
		return NULL;
	}

	memcpy(arr, s1, s1_len);
	memcpy(arr + s1_len, s2, n);
	arr[s1_len + n] = '\0';

	return arr;
}
