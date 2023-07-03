#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the substring containing the accepted characters
 *
 * Return: the number of characters in the initial segment of s that
 *         consist only of characters from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int size;

	size = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' ' && s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				size++;
			}
		}
	}

	return (size);
}
