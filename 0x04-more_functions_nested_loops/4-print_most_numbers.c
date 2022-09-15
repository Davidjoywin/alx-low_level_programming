#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 *						without print 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	i = -1;
	while (i < 9)
	{
		i++;
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
