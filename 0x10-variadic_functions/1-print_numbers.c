#include "variadic_functions.h"

/**
 * print_numbers - output the string
 * @separator: passed separator argument
 * @n: passed int as a counter
 *
 * Return: Null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		exit(0);
	}
	for (a = 0; a < n; a++)
	{
		if (a != n && a > 0)
		{
		printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
