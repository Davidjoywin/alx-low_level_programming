#include "main.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0
 * @n: numbers of tables
 */

void print_times_table(int n)
{
	int tables = 0;
	int length;
	int multiplication;

	while (tables < n + 1)
	{
		length = 0;
		while (length < n + 1)
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
			_putchar(' ');
		}
		tables++;
		_putchar('\n');
	}
}
