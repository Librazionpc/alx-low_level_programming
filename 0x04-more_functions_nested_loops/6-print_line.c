#include <stdio.h>
#include "main.h"
/**
 * print_line - Funtion that print line
 *
 * @n: Fetches the argument for main.c
 *
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	putchar('\n');
}
