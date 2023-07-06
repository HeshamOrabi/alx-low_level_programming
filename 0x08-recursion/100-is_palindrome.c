#include "main.h"

/**
 * is_palindrome - Checks if a given string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	int len;

	len = getLen(s);

	if (len == 0)
	{
		return (1);
	}

	return (paliHelp(s, 0, len - 1));

}

/**
 * getLen - Helper function to calculate the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
*/
int getLen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (getLen((s + 1)) + 1);
}

/**
 * paliHelp - Helper function to check if a given string is a palindrome.
 * @s: The string to check.
 * @st: The start index of the string.
 * @fin: The end index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
*/
int paliHelp(char *s, int st, int fin)
{
	if (s[st] != s[fin])
	{
		return (0);
	}

	if (st < fin + 1)
	{
		return (paliHelp(s, st + 1, fin - 1));
	}

	return (1);

}
