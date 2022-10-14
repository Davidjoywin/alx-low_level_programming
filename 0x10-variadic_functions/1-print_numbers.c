#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: string to be printe between numbers
 * @n: size of variadic args
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	int i, num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		num = (int)va_arg(args, int);
		printf("%d", num);

		if (seperator != NULL && i < (int)n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
}

