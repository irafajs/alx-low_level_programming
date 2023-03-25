#include "main.h"

/**
* print_diagonal - print diagonal line
* @n : passes argument
*
* Return : 0 at success
*
*/

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
