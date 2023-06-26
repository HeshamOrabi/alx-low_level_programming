#include "main.h"

/**
 * rev_string - rev string by using a new loop technique
 * @s: pointer to str addr
*/
void rev_string(char *s)
{
	int i, j, k, len;
	char tmp;

	len = 0;
	for (k = 0; s[k] != 0; k++)
	{
		len++;
	}

	for (i = len - 1, j = 0; j < i; i--, j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
