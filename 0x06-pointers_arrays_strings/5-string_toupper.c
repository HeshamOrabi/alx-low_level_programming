#include "main.h"

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase
 * @str: Pointer to the string to be converted
 *
 * Return: Pointer to the converted string
*/
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	}

	return (str);
}
