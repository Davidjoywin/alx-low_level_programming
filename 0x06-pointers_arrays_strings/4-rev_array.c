#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
