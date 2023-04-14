#include "main.h"

void *_realloc(__attribute__ ((unused)) void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a, b;
	int *ns;

	ns = malloc(sizeof(int) * old_size);
	if(ns == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < old_size; a++)
	{
		ns[a] = old_size;
	}
	ns = realloc(ns, sizeof(int) * new_size);
	if( ns == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		exit(1);
	}
	if (new_size == old_size)
	{
		return (ns);
	}
	if (ns == NULL)
	{
		return (ns);
	}
	if (new_size == 0 && ns != NULL)
	{
		free(ns);
		return (NULL);
	}
	for (b = 0; b < new_size; b++)
	{
		ns[b] = new_size;
	}
	return (0);
}

