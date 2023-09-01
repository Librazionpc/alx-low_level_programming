#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: The binary to be converted
 *
 * Return: The results
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base = 1, results = 0, len = 0;
	const char *save;

	save = b;
	len = strlen(save);
	for (i = len - 1; i >= 0; i--)
	{
		if (save[i] >= 'a' && save[i] <= 'z')
			return (0);
		else if (save[i] == '1')
			results += base;
		base *= 2;
	}
	return (results);
}
