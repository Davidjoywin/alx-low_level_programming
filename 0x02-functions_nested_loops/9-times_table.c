#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int tables = 0;
	int length;
	int multiplication;

	while (tables < 10)
	{
		length = 0;
		while (length < 10)
		{
			int first, second;

			multiplication = length * tables;
			first = multiplication / 10;
			second = multiplication % 10;
			if (first > 0)
			{
				_putchar(48 + first);
			}
			_putchar(48 + second);
			length++;
			_putchar(',');
			_putchar('\t');
		}
		tables++;
		_putchar('\n');
	}
}
