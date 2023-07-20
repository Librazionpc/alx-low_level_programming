#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Function that print a triangle
 *
 * @size: Fetches the argument from main.c
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
