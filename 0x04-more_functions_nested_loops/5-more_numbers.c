#include "main.h"

/**
*more_numbers - print 1-14, 14th times
*
*Description: function print number 1-14
*foutheen times
*
*Return: o at success
*/

void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}