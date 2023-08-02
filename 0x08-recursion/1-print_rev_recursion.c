#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Function that strings in the reverse
 *
 * @s: Fetches the argument that is the string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}

