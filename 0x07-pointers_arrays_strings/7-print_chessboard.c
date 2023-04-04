#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - output the chessboard keys name
 * @a: point to the char
 *
 * Return: 0 at success
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b <= 7; b++)
	{
		for (c = 0; c <= 7; c++)
		{
		_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
