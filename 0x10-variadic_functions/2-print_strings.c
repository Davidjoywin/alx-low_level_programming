#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: Seperate the printed values
 * @n: number of variadic args
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	int i;
	char *tmp;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < (int)n; i++)
	{
		tmp = va_arg(nums, char *);

		if (tmp == NULL)
			printf("%p", tmp);
		else
			printf("%s", tmp);
		if (seperator != NULL && i < (int)n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
}
