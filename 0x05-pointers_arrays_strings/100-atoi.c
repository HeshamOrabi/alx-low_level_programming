#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i = 0, n = 0, sign = 1;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0') * sign;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			break;
		}
		i++;
	}

	return (n);
}
