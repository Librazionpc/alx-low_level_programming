#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Funtions that return the string lenght
 *
 * @s: Fetches the argument from main.c
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
