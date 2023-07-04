#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the substring containing the accepted characters
 *
 * Return: pointer to the byte in s that matches one of the
 *         bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
