#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: returns to pointer to a 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, **arr;

	arr = calloc(height, sizeof(*arr));
	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(*(arr[i])));
	}

	return (arr);
}
