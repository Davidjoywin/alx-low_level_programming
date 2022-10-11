#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: param pointer to a the pointer to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
