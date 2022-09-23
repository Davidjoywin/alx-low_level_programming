#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: params dest to accept other str
 * @src: params src to be added to dest
 * @n: param n number of byte from src
 * Return: return char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while ((src[j] != '\0') && (j < n))
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}

