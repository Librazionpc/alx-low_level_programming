#include <stdio.h>

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: The integer
 * @index: The postion to be worked on
 *
 * Return: Always 1 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitNum;
	unsigned long int mask;

	bitNum = sizeof(unsigned long int) * 8;
	if (index >= bitNum)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
