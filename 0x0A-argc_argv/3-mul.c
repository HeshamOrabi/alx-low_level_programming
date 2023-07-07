#include <stdio.h>

/**
 * main - prints the mul of two number of arguments passed into file
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = argv[1] * argv[2];

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
