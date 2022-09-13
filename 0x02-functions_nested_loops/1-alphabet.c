#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 * and print a new line after
 * Return: void
 */

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar(97 + i);
		i++;
	}
	_putchar('\n');
}
