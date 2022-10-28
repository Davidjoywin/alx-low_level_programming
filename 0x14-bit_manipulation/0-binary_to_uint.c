#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, temp, num, b_size;

	if (b == NULL)
		return (0);

	b_size = 0;
	while (b[b_size])
		b_size++;

	i = 0;
	num = 0;
	b_size--;
	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			i++;
		}

		else if (b[i] == '1')
		{
			j = i;
			temp = 1;
			while (j < b_size)
			{
				temp *= 2;
				j++;
			}
			num += temp;
			i++;
		}
		else
			return (0);
	}
	return (num);
}
