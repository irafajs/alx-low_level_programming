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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);
#endif
