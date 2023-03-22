#include "main.h"

/**
*print_alphabet - Entry point
*
*description : 'print a-z alphabet'
*
*Return: Always 0 (Success)
*/

void print_alphabet(void)/*print a-z alphabet*/
{
	char AL;

	for (AL = 'a'; AL <= 'z'; AL++)
	{
		_putchar(AL);
	}
	putchar('\n');
}
