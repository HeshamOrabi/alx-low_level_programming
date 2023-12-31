#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @str: pointer to string params
 *
 * Return: str pointer
 */

char *rot13(char *str)
{
	int i, j;
	char tmpStr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char altTempStr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == tmpStr[j])
			{
				str[i] = altTempStr[j];
				break;
			}
		}
	}
	return (str);
}
