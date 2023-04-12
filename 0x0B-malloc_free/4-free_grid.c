#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - output the grid info
 * @grid: passed argument as ap to p
 * @height: passed argument as heiight
 *
 * Return: void at success
 */
void free_grid(int **grid, int height)
{
	int a;

	a = 0;
	while (a < height)
	{
		a++;
		free(*(grid + a));
	}
	free(grid);
}
