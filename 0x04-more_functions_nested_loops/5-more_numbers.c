#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from
 *					from 0 - 14, followed by new line
 */

void more_numbers(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
