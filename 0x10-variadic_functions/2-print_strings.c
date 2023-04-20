#include "variadic_functions.h"

/**
 * print_strings - output the string
 * @separator: passed string param
 * @n: passed int as counter
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list ap;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		if (a != 0)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
		{
			exit(1);
		}
		else
		{
		printf("%s", va_arg(ap, char*));
		}
	}
	printf("\n");
	va_end(ap);
}


