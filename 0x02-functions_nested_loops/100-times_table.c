#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void print_times_table(int n)
{
	int tables = 0;
	int length;
	int multiplication;

	while (tables <= n && n > 0 && n < 15)
	{
		length = 0;
		while (length <= n)
		{
			int first, second;

			multiplication = length * tables;
			first = multiplication / 10;
			second = multiplication % 10;

			if (first > 0)
			{
				_putchar(48 + first);
			}

			if (tables >= 0 && first == 0 && length > 0)
			{
				_putchar(' ');
			}
			_putchar(48 + second);
			length++;
			if (length != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		tables++;
		_putchar('\n');
	}
}
