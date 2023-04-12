#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int a;

	a = 0;
	while(a < height)
	{
		a++;
		free(*(grid + a));
	}
	free(grid);
}
