#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int b;
	char *ns;
	char *musa = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ns = malloc(new_size);
		return (ns);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ns = malloc(new_size);
	if (ns == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < old_size; b++)
	{
		ns[b] = musa[b];
	}
	free(musa);
	return (0);
}

