#include "main.h"
#include <string.h>

/**
 * _memset - fills the memory with a constant byte.
 * @s: param pointing to constant bytes
 * @b: params bytes used
 * @n: number of bytes pointed to by s
 * Return: return a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	s = memset(s, b, (unsigned int)n);
	return (s);
}
