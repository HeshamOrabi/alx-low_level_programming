#include "main.h"

/**
 *
 *
 *
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = _strlen(s) - 1, j = 0; j < i; i--, j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
