#include "main.h"

int **alloc_grid(int width, int height)
{
	int a, b;
	int **pt;

	if (width <= 0 || height <=0)
	{
		return (NULL);
	}
	pt = (int **) malloc(sizeof(int*) * height);
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
