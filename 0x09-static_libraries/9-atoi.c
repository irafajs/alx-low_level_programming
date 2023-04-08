#include <stdlib.h>
#include <string.h>

/**
 * _atoi - output an integer while passed char
 * @s: passed param
 *
 * Return: 0 at success
 */
int _atoi(char *s)
{
	char *p;

	strtol(s, &p, 10);
	return (0);
}
