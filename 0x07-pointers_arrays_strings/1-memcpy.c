#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copied memory
 * @src: source from which memory is copied
 * @n: number of bytes to be copied from src
 * Return: returns a char pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

