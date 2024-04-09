#include "search_algos.h"

/**
 * linear_search - It loops through index and find
 * @array: the array of the integers
 * @size: the len of the array
 * @value: the value we are searching for .
 *
 * Return: -1 on failure and the index on Success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
