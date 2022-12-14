#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a variable of type struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %p\n", NULL);

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %p\n", NULL);
	}
}
