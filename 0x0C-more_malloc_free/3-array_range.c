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
	int *new_mem;

	new_mem = malloc(sizeof(int) *(max - min));
	if (new_mem == NULL && min > max)
		return (NULL);

	return (new_mem);
}

