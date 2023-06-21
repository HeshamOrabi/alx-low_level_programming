#include "main.h"
#include <stdio.h>

/**
 * main - initialize program
 * Return: always 0 (success)
*/
int main(void)
{
	int nOfSum;

	nOfSum = fibonacci_sum(4000000);

	printf("%d\n", nOfSum);
	return (0);
}

/**
 * fibonacci_sum - calculate the sum of even-valued Fibonacci numbers up to n
 * @n: the maximum value of the Fibonacci term
 * Return: the sum of even-valued terms
*/
int fibonacci_sum(int n)
{
	int fNum = 1, sNum = 1, next = 0, sum = 0;

	while (next <= n)
	{
		next = fNum + sNum;
		if ((next % 2) == 0)
		{
			sum += next;
		}
		fNum = sNum;
		sNum = next;
	}
	return (sum);
}
