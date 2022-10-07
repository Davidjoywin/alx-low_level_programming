#include <stdlib.h>
#include "main.h"

/**
 * _realloc - allocates a memory block using the malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: return a generic pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i;

	if (new_size > old_size)
	{
		new_ptr = malloc(old_size + new_size);
		if (new_ptr == NULL)
		{
			free(NULL);
			return (NULL);
		}

		for (i = 0; i < old_size; i++)
			new_ptr[i] = ptr[i];
		free(ptr);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			free(ptr);
			free(new_ptr);
			return (NULL);
		}
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}
