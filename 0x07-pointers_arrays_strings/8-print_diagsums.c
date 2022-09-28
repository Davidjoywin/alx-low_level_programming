
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: array param
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + ((i * size) + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

