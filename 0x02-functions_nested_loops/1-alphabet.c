#include "main.h"
void print_alphabet(void);

/**
*print all letters-user header
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int AL;

	for (AL = 'a'; AL <= 'z'; AL++)
	{
		_putchar(AL);
	}
	putchar('\n');
	return(0);
}
