#include "function_pointers.h"

/**
 * print_name - Funtion that print a name
 *
 * @name: Fetches the string
 * @f: Calls the funtion
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}