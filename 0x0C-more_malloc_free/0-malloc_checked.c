#include "main.h"

/**
 * malloc_checked - output passed variable address
 * @b: passed paramater
 *
 * Return: a pointer to the memory allocation
 */
void *malloc_checked(unsigned int b)
{
	char *ab;

	ab = malloc(b);
	if (ab == NULL)
	{
		exit(98);
	}
	return (ab);
}
