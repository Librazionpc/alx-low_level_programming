#include <stdio.h>

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
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
 * Return: The result of the subtraction (a - b).
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
 * Return: The product of the two integers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The result of the division (a / b).
 * If division by zero is entered, prints an error message and returns 0.
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - Calculates the modulo of two integers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The remainder of the division (a % b).
 * If division by zero is enter, prints an error message and returns 0.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
}
