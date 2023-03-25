#include "main.h"

/**
 *print_square - print sqaure with given inp
 *@size : passed argument
 *
 * Return : o at success
 */

void print_square(int size)
{
	int i;
	int z;

	for (i = 0; i < size; i++)
	{
		for (z = 0; z < size; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
