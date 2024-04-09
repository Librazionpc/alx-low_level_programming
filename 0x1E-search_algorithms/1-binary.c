#include "search_algos.h"

/**
 * binary_search - splits the array till we get the the value needed
 * @array: the array of the integers
 * @size: the len of the array
 * @value: the value we are searching for .
 *
 * Return: -1 on failure and index on success
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = (high + low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
