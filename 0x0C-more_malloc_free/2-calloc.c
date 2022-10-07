#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of item to retain memory for
 * @size: size of type to retain memory for
 * Return: return a generic pointer type
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_mem;

	new_mem = malloc(nmemb * size);
	if (new_mem == NULL && (size * nmemb) == 0)
		return (NULL);
	return (new_mem);
}

