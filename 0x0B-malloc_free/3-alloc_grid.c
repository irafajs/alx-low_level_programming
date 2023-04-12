#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - output a grid of 2 d array
 * @width: define with of the array
 * @height: define height of the array
 *
 * Return: 0 at success and NULL at fail
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **pt;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pt = (int **) malloc(sizeof(int *) * height);
	if (pt == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		pt[a] = (int *)malloc(sizeof(int) * width);
		if (pt[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(pt[b]);
			}
			free(pt);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			pt[a][b] = 0;
		}
	}
	return (pt);
}
