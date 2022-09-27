#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of the copied memory area
 * @src: source of the copied memory area
 * @n: number bytes to be copied from src
 * Return: return a pointer to a dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
