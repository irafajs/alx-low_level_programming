#include "main.h"

/**
*print all letters-user header
*
*Return: Always 0 (Success)
*/

void print_alphabet(void)

{
	char AL;

	for (AL = 'a'; AL <= 'z'; AL++)
	{
		_putchar(AL);
	}
	putchar('\n');
}
