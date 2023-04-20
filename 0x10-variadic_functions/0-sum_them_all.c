#include "variadic_functions.h"

/**
 * sum_them_all - output a sum of one or more args
 * @n: passed int to use as counter
 *
 * Return: gut at success, 0 when n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	 int gut = 0;

	 va_list ap;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
		gut = gut + va_arg(ap, int);
		}
	}
	va_end(ap);
	return (gut);
}
