#include "main.h"

/**
 * print_last_digit - output last digit
 * @n: passed param
 *
 * Return: 0 at success
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;

	}
	_putchar ('0' + n % 10);
	return (n % 10);
}
