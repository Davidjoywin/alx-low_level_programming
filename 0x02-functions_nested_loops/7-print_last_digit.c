#include "main.h"

/**
 * print_last_digit - return the value of the last digit
 * @num: accept an integer as argument
 *
 * Return: return int
 */

int print_last_digit(int num)
{
	int remainder;

	remainder = num % 10;
	_putchar('0' + remainder);
	return (remainder);
}
