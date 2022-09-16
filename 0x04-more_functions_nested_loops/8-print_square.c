#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of square to be printed
 */


void print_square(int size)
{
	int row, column;

	column = 0;
	while (column < size)
	{
		row = 0;
		while (row < size)
		{
			_putchar('#');
			row++;
		}
		column++;
		_putchar('\n');
	}
}

