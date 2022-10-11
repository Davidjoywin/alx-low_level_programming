#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: %p\n", NULL);

	printf("Age: %f\n", d->age);

	(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: %p\n", NULL);
}
		
