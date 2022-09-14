#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar(0);
}
