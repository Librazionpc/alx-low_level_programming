#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Print values in an array
 *
 * @array: Fetches the value from the array
 * @size: Fetches the size of the array
 * @action: Funtion that print the value in array
 * Return: Nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
