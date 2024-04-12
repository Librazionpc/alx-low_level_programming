#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Using sqrt to jump through the array checking
 * for the one index less than the value
 * @array: The array list of the integers
 * @size: The size of the array
 * @value: The value wwe are looking for in the list
 *
 * Return: The index of the value in the kist or -1 in failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step = sqrt(size), i = 0;

	if (array == NULL)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while ((array[step - 1]) < value)
	{
		i = prev;
		prev = step;
		step += sqrt(size);
		if (array[prev] >= value)
		{
			prev -= i;
			step -= i;
			break;
		}

		if (prev >= size)
			return (-1);

		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == size)
			return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);

	return (-1);
}
