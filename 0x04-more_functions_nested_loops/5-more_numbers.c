#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from
 *					from 0 - 14, followed by new line
 */

void more_numbers(void)
{
	int i;

	i = 0;
	while (i <= 14)
	{
		if (i < 10)
		{
			_putchar('0' + i);
			i++;
		}
		else
		{
			_putchar('0' + i/10);
			_putchar('0' + i%10);
			i++;
		}
	}
	_putchar('\n');
}
