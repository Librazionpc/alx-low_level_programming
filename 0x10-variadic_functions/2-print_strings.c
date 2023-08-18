#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - Funtion that print strings
 *
 * @separator: Fetches the string that separate the strings
 * @n: Fetches the number of string passed has the argument
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int a;
	char *string;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			_putchar('0');
		for (a = 0; string[a]; a++)
			_putchar(string[a]);
		if (separator == NULL)
			continue;
		if (i < n - 1)
		{
			for (a = 0; separator[a]; a++)
				_putchar(separator[a]);
		}
	}
	_putchar('\n');
}
