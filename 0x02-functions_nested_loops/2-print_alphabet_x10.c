#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		i++;
		_putchar('\n');
	}
}
