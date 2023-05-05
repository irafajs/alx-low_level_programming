#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: passed paramaeter as a decimal to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int a;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	m = n & 1;
	for (a = 0; a < 1; a++)
	{
		_putchar (m + '0');
	}
}
