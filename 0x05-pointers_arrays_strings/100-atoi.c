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

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}

	if (s[i] == '+' || s[i] == '-')
	{
		sign = s[i++] == '-' ? -1 : 1;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i++] - '0') * sign;
	}
	return (n);
}
