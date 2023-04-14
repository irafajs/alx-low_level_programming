#include "main.h"

/**
 * _calloc - output the string
 * @nmemb: passed argument set to zero
 * @size: passed param as size
 *
 * Return: pointer at success.if fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ab;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ab = malloc(nmemb * size);
	if (ab == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		ab[a] = 0;
	}
	return (ab);
}
