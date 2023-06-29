#include "main.h"

/**
 * _strncat - concat a spasific num n of char in str
 * @dest: the main str
 * @src: the str to b econcat
 * @n: num of char to concat
 *
 * Return: dest str
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
		{
			dest[j + len] = src[j];
		}
		else
		{
			dest[j + len] = '\0';
			break;
		}
	}

	return (dest);
}
