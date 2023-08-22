#include "main.h"
/**
 * _strspn - output a portion of the cmp string
 * @s: passed string to be compared at.
 * @accept: compared tring to s
 *
 * Return: number of char in compared string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;

	a = strspn(s, accept);
	return (a);
}
