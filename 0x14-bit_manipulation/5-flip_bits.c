#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 *
 * @n: The integer
 * @m: flip integer
 *
 * Return: The results
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResults;
	unsigned int count = 0;

	xorResults = n ^ m;
	while (xorResults)
	{
		count += xorResults & 1;
		xorResults >>= 1;
	}

	return (count);
}
