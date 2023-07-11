#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
*/
char *_strdup(char *str)
{
	int i;
	char *newstr;

	newstr = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL || newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	return (newstr);
}
