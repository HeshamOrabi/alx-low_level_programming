#include "main.h"
#include <stdio.h>

/**
 * main - intialize program
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int sum;

	sum = natural(1024);

	printf("%d\n", sum);

	return (0);
}

/**
 * natural - print the sum of natural
 * @n: given number
 * Return: always sum
*/
int natural(int n)
{
	int i, sum;

	for (i = 0; i < n; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	return (sum);
}
