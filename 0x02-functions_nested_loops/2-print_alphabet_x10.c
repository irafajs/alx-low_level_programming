#include "main.h"

/**
*print_alphabet_x10 - _putchar letter a-z
*
*Return: x10 a-z
*/
void print_alphabet_x10(void)
{
	int c = 0;
	char p;

	while (c < 10)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
		c++;
	}
}
