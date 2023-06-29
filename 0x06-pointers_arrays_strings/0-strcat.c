#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string.
 * @dest: holding str
 * @src: strto concat
 *
 * Return: str
*/
char *_strcat(char *dest, char *src)
{
	int i, j, len;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j + len] = src[j];
	}

	dest[j + len] = '\0';

	return (dest);

}
