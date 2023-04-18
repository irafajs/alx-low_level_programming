#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free allocated memery
 * @d: passed param of pointe type
 *
 * Return: cvoid
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
