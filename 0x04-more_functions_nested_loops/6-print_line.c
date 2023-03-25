#include "main.h"

/**
* print_line - print n line
*@n: argument passed to function
*
* retun: 0 when successful
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
