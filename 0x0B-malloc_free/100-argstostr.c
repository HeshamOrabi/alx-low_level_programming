#include "main.h"	
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: argument count
 * @av: arrgument vector arr of string
 * Return: 0
*/
char *argstostr(int ac, char **av)
{

	int i, j, r = 0, len = ac;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}	

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; n++, r++)
		{
			str[r] = av[i][j];
		}

		if (str[r] == '\0')
		{
			str[r + 1] = '\n';

		}
	}

	return (str);
}
