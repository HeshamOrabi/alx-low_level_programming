#include "main.h"
#include <stdio.h>

/**
 * main - initialize program
 * Return: always 0 (success)
*/
int main(void)
{
	fibonacci(98);
	return (0);
}

/**
 * fibonacci - generate the Fibonacci sequence up to n
 * @n: the number of terms to generate
*/
void fibonacci(int n)
{
	long int i, fNum = 1, sNum = 1, next = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			next = 1;
			printf("%ld, ", next);
		} else if (i == n - 1)
		{
			next = fNum + sNum;
			printf("%ld\n", next);
		} else
		{
			next = fNum + sNum;
			printf("%ld, ", next);
			fNum = sNum;
			sNum = next;
		}
	}
}
