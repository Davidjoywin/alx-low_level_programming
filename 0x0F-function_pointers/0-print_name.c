#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: string to be printed
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
