#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to be located
 *
 * Return: pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0')
		{
			return (s);
		}
		else if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
