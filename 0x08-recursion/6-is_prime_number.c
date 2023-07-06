#include "main.h"

int newPrine(int n, int i);

/**
 * is_prime_number - Checks if a given integer is a prime number.
 * @param n The integer to check.
 * @return 1 if the integer is prime, 0 otherwise.
 *
 * Return: 0 if not prime and 1 if primre using the helper function
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n == 1 || n < 0)
	{
		return (0);
	}

	return newPrime(n, i);
}

/**
 * newPrime - Helper function to check if a given integer is a prime number.
 * @n: The integer to check.
 * @i: The divisor to check if n is divisible by.
 *
 * Return: 1 if the integer is prime, 0 otherwise.
*/
int newPrime(int n, int i)
{
	if (n / 2 < i)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (newPrime(n, i + 1));
}
