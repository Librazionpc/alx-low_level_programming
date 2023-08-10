#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function that create a allocation in memory
 *
 * @s: Fetches the amount of byte to created
 *
 * Return: Termination value
 */

void *malloc_checked(unsigned int s)
{
	char *ptr;

	ptr = malloc(s);
	return (ptr);
	if (ptr == NULL)
		exit(98);
}
