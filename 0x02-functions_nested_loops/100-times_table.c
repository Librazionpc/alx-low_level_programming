#include <stdio.h>
#include "main.h"
/**
 * spacing_format - fuction that creates space for the times_table arrangements
 *
 * @d: Fetches the answer to br place from call function
 */
void spacing_format(int d)
{
	if (d <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(d + '0');
	}
	else if (d > 9 && d <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((d / 10) + '0');
		_putchar((d % 10) + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(d / 100 + '0');
		_putchar(d / 10 % 10 + '0');
		_putchar(d % 10 + '0');
	}
}


/**
 * print_times_table - Fuction that creates a muiltiplication table
 *
 * @n: It fetch the argument from the main.c
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 0 && n < 14)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				spacing_format(a * b);
			}
			_putchar('\n');
		}
	}
}
