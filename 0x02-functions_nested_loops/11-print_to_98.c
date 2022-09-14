#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter numbers
 */

void greater_than_98(int n);

void equal_to_98(int n);

void less_than_98(int n);

void print_to_98(int n)
{
	if (n > 98)
	{
		greater_than_98(n);
	}
	else if (n < 98)
	{
		less_than_98(n);
	}
	else
	{
		equal_to_98(n);
	}
	printf("\n");
}


/**
 * greater_than_98 - when n is greater than 98
 * @n: integer input
 */

void greater_than_98(int n)
{
	while (n >= 98)
	{
		if (n > 9)
		{
			int first, second, third;

			second = n / 10;
			third = n % 10;

			if (second > 9)
			{
				first = second / 10;
				_putchar(48 + first);
				second %= 10;
			}
			_putchar(48 + second);
			_putchar(48 + third);
		}
		else
		{
			_putchar('0' + n);
		}

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}
}

/**
 * less_than_98 - when n is less than 98
 * @n: integer input
 */

void less_than_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}
}

/**
 * equal_to_98 - when n is equal to 98
 * @n: integer input
 */

void equal_to_98(int n)
{
	printf("%d", n);
}
