#include <stdlib.h>
#include <stdio.h>

/**
 * main - the minimum number of coins for an amount of money
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int n, i, nOfC;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}

	n = atoi(argv[1]);

	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}

	nOfC = 0;
	for (i = 0; i < 5; i++)
	{
		while (n <= arr[i])
		{
			nOfC++;
			n -= arr[i];
		}
	}

	printf("%d", nOfC);
	return (0);
}
