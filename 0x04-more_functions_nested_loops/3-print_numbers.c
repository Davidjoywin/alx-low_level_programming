#include "main.h"

/**
  * print_numbers - prints numbers from 0 - 9
  * 
  */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar('0' + i);
    }
	_putchar(' ');
}
