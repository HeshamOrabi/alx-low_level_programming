#include "main.h"
#include <stdio.h>

/**
 * main - initialize program
 * Return: always 0 (success)
*/
int main(void)
{
	fibonacci_un(98);
	return (0);
}

/**
 * fibonacci - generate the Fibonacci sequence up to n
 * @n: the number of terms to generate
*/
void fibonacci_un(unsigned long int n)
{
		unsigned long int i, bef = 1, aft = 2, l = 100000000, bef1, bef2, aft1, aft2;


		printf("%lu", bef);


		for (i = 1; i < n - 7; i++)
		{
			printf(", %lu", aft);
			aft += bef;
			bef = aft - bef;
		}


		bef1 = (bef / l);
		bef2 = (bef % l);
		aft1 = (aft / l);
		aft2 = (aft % l);


		for (i = 92; i < n + 1; ++i)
		{
			printf(", %lu", aft1 + (aft2 / l));
			printf("%lu", aft2 % l);
			aft1 = aft1 + bef1;
			bef1 = aft1 - bef1;
			aft2 = aft2 + bef2;
			bef2 = aft2 - bef2;
		}
		printf("\n");
}
