#include "main.h"

int *array_range(int min, int max)
{
	int *ab;
	int a, b, p, c = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = 0;
	for (b = min; b < max; b++)
	{
		p++;
	}
	ab = malloc(sizeof(int) * p);
	if (ab == NULL)
	{
		return (NULL);
	}
	for (a = min; a < max; a++)
	{
		ab[c] = a;
		c++;
	}
	return (ab);
}



