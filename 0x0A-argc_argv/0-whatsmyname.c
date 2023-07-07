#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful
*/
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s\n", argv[argc - 1]);
	}

	return (0);
}
