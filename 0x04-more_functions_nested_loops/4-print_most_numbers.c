#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * without print 2 and 4
 */

void print_most_numbers(void)
{
	for (int i = 0; i < 9; i++)
	{
		if (i != 4 || i != 2)
		{
			_putchar('0' + i);
		}
	}
