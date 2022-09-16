#include "main.h"

/**
 * print_triangle - print triangle to the terminal
 * @size: params for size of triangle
 */

void print_triangle(int size)
{
	/**
	 * tmp - hold the temporary position of #
	 * from the right side by subtracting the column
	 * the original size
	 */
	int column, row, tmp;

	column = 0;
	while (column < size)
	{
		row = 0;
		while (row < size)
		{
			row++;
			tmp = size - column;
			if (row < tmp)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		column++;
		_putchar('\n');
	}
}
