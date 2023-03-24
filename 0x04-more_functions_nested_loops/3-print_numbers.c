#include "main.h"

/**
*print_numbers - print int 0-9
*
*Description: function computer by incrementing 1 to i
*
*Return: number 0 upto 9
*/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
