#include <ctype.h>
#include "main.h"

/**
*islower - lower alphabet
*@val: first operand
*val1: second operand
*val2: third operand
*
*Description: function check if the chatacter
*passed it, is lower and print 1 or otherwise print0
*
*Return: 1 if alphabet is lower case. 0 otherwise
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int val = _islower('R');
	int val1 = _islower('p');
	int val2 = _islower('q');

	_putchar (val + '0');
	_putchar (val1 + '0');
	_putchar (val2 + '0');
	_putchar ('\n');
	return (0);
}
