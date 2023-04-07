#include "main.h"

/**
 * is_palindrome - check if string is palindrome
 * @s: passed param
 *
 * Return: 1 at success
 */
int is_palindrome(char *s)
{
	int ubu;

	ubu = strlen(s);
	if (ubu == 0 || ubu == 1)
	{
		return (1);
	}
	return (cond_met(s, 0, ubu - 1));
}

/**
 * cond_met - check character in a string match or not
 * @p: passed param string
 * @x: passed param int
 * @y: passed param int
 *
 * Return: 1 at succes, otherwise o
 */
int cond_met(char *p, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	else if (p[x] == p[y])
	{
		return (cond_met(p, x + 1, y - 1));
	}
	else
	{
		return (0);
	}
}
