#include <stdio.h>
#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte.
 *
 * @s: space to be filled
 * @b: string or character that @s will be filled with.
 * @n: Fectches the number of bytes from main.c
 *
 * Return: The outputs.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *book = s;
	int a = 0;

	while (n--)
	{
		s[a] = b;
		a++;
	}
	return (book);
}
