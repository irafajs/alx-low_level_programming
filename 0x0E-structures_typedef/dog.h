#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - contains argument to pass to function
 * @name: passed argument to name
 * @age: passed argument to age
 * @owner: passed argument desc of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
