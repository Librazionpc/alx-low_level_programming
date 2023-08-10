#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - Funtion that creates an array of integer
 *
 * @min: Fetches the lowest int from main.c
 * @max: Fetches the highest int from main.c
 *
 * Return: The arrays
 *
 */

int *array_range(int min, int max)
{
	int *pt_array;

	if (min > max)
		return (NULL);
	pt_array = malloc(sizeof(int) * max);
	if (pt_array == NULL)
		return (NULL);
	return (pt_array);
}
