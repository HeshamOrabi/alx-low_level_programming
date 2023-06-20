#include "main.h"

/**
 * main - intialization of program
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char str[] = "_putchar";

	for (int i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
