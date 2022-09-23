#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination to copy the string into
 * @src: string to copy
 * @n: number of src bytes to use
 * Return: return pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
