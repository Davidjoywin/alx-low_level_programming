
#include "main.h"


/**
 * *_strcat - returns a pointer to the returning string
 * @dest: parameter dest
 * @src: params src
 * Return: return a pointer to a string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = sizeof(dest);
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
