#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}

		i++;
	}
	_putchar('\n');
}
