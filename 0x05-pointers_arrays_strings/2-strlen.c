#include "main.h"

/**
 * _strlen - get str lenth
 * @s: first addr of array
 * Return: lenth of str
*/
int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != 0; i++)
	{
		count += 1;
	}

	return (count);
}
