#include "main.h"

/**
 * array_range - output array of int
 * @min: passed param
 * @max: passed param
 *
 * Return: pointer at success, NULL if fails
 */
int *array_range(int min, int max)
{
	int *ab;
	int a, p, c = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = (max -min +1); 
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



