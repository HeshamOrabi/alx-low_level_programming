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

	if (str == NULL)
	{
		return (NULL);
	}

	newstr = malloc(sizeof(char) * (strlen(str) + 1));

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		newstr[i] = str[i];
	}

	newstr[strlen(str)] = '\0';

	return (newstr);
}
