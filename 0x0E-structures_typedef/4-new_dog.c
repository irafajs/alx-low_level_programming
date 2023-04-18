#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - output a copy of the prog dog
 * @name: passed param
 * @age: passed param of float type
 * @owner: passed param of char type
 *
 * Return: new god
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, ing, ubu;
	char *g, *k;
	dog_t *imb;

	ing = 0;
	for (a = 0; name[a] != '\0'; a++)
	{
		ing += 1;
	}
	ubu = 0;
	for (a = 0; owner[a] != '\0'; a++)
	{
		ubu += 1;
	}
	imb = malloc(sizeof(dog_t));
	if (imb == NULL)
	{
		return (NULL);
	}
	g = malloc((ing + 1) * sizeof(char));
	if (g == NULL)
	{
		free(imb);
		return (NULL);
	}
	for (a = 0; a < ing; a++)
	{
		g[a] = name[a];
	}
	g[a] = '\0';
	imb->name = g;
	imb->age = age;
	k = malloc((ubu + 1) * sizeof(char));
	if (k == NULL)
	{
		free(g);
		free(imb);
		return (NULL);
	}
	for (a = 0; a < ubu; a++)
	{
		k[a] = owner[a];
	}
	k[a] = '\0';
	imb->owner = k;
	return (imb);
}



