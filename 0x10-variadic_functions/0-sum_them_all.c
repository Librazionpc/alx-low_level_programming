#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that sums number
 *
 * @n: Fetches the integers to printed
 *
 * Return: The sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		if (n > 0)
			sum += va_arg(args, unsigned int);
	}
	return (sum);
}
