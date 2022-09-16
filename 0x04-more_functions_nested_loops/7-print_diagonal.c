#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number represent the length of diagonal
 */

void print_diagonal(int n)
{
	int row;
	int column = 0;

	while (column <= n)
	{
		row = 0;
		while (row <= n)
		{
			row++;
			if (row == column)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		column++;
		_putchar('\n');
	}
}
