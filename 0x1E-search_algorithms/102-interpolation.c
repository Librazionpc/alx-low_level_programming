#include "search_algos.h"

/**
 *
 *
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, position, index_dif;
	int value_dif;
	double portion;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		index_dif = high - low;
		value_dif = array[high] -array[low];
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

