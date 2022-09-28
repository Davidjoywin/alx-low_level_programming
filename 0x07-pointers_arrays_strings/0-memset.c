#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string memory to be filled by b
 * @b: contant byte to fill s memory
 * @n: first n bytes to be filled in s
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

