#include "main.h"

/**
 * _print_rev_recursion - output string in reverse
 * @s: passed param
 *
 * Return: 0 at success
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
