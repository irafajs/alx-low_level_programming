#include <string.h>

/**
 * _memset - output memset of a string
 * @s: passed pointer par
 * @b: passed char to replace a set
 * @n: passed unsignet int, replacement number
 *
 * Return: 0 at success.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int buf;

	for (buf = 0; buf < n; buf++)
	{
		s[buf] = b;
	}
	return (0);
}
