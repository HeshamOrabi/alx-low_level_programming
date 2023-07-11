#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if malloc fails
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size = sizeof(char) * (strlen(s1) + strlen(s2)) + 1;

	newstr = malloc(size);

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		newstr[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		newstr[i] = s2[j];
	}

	newstr[size - 1] = '\0';
	return (newstr);

}
