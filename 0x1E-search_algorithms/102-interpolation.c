#include "search_algos.h"

/**
 * interpolation_search - Function that immplement interpolation search
 * @array: The list of interger
 * @size: The size of the array
 * @value: The integer needed
 *
 * Return: The position or -1 on failure
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, position, index_dif;
	int value_dif;
	double portion;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		index_dif = high - low;
		value_dif = array[high] - array[low];
		portion = (double)(value - array[low]) / value_dif;
		position = low + (index_dif * portion);
		printf("Value checked array [%ld] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);

		else if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}

	return (-1);
}
