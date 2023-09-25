
/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of a minus b.
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of a divided by b.
*/
int div(int a, int b)
{
	if (b == 0)
		return (0);

	return a / b;
}

/**
 * mod - Computes the modulus of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of a divided by b.
 */
int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
