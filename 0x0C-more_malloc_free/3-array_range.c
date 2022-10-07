#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of the array
 * @max: maximum range of an array
 * Return: return the pointer to the memory allocated for the array
 */

int *array_range(int min, int max)
{
	int range, *new_mem;

	range = max - min
	new_mem = malloc(char(int) *range)
	if (new_mem == NULL && min > max)
		return (NULL);

	return (new_mem);
}

