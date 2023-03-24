#include "main.h"

/**
*print_most_numbers - print lower alphabet
*
*Description: function print numbers 0-9
*and remove 2 and 4 while printing.
*
*Return: 0-9, without 2 and 4.
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar (i + '0');
		}
	}
	_putchar ('\n');
}

