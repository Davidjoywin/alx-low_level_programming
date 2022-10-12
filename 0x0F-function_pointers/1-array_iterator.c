#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on
 * each element of an array
 * @array: array to use
 * @size: size of the array
 * @action: callback function to perform any action on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}

