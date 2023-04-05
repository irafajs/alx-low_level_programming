#include "main.h"
/**
 * _puts_recursion - print output recursively
 * @s: passed int
 *
 * Return: 0 at success
 */
void _puts_recursion(char *s)
{
	if (strlen(s) < 1)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
