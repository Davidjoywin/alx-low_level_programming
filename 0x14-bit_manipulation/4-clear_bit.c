#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at given index
 * @n: number bit to use
 * @index: index of bit to clear
 * Return: return 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
