#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int save;
	unsigned int bitNum;

	bitNum = sizeof(unsigned long int) * 8;
	if (index >= bitNum)
	{
		return (-1);
	}
	save = 1UL << index;

	*n |= save;

	return (1);
}
