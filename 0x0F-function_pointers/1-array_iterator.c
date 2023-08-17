#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Print values in an array
 *
 * @array: Fetches the value from the array
 * @size: Fetches the size of the array
 * @action: Funtion that print the value in array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
