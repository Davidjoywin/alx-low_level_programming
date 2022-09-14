#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		for (char i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		i++;
	}
	_putchar('\n');
}
