#include <ctype.h>
#include <stdio.h>

/**
 * print_sign - print the sign of int
 * @n: passed int
 *
 * Return: -1 if negative, and 1 if positive and 0 when zero
 */

int print_sign(int n)
{
	if ( n > 0)
	{
		putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar ('-');
		return (-1);
	}
	else
	{
		putchar ('0');
		return (0);
	}
}

