#include "main.h"

/**
 * factorial - output !n
 * @n: passed param
 *
 * Return: 0 at success
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (factorial(n - 1) * n);
	}
}
