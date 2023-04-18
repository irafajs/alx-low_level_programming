#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - output the assigned value of passed param
 * @d: pointer to struct dog
 * @name: passed param to name
 * @age: passed param to age
 * @owner: passed param to owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return;
}
