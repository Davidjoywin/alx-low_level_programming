#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @n: number whose bit to use
 * @index: index of bit in n to find
 * Return: the value of the bit index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int i)ndex)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if (n & (1 << index)) == 0
		return (0);

	return (1);
}
