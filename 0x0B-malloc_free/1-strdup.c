#include "main.h"

/**
 * _strdup - ouput the sting
 * @str: passed param
 *
 * Return: string at succes Null while error is give
 */
char *_strdup(char *str)
{
	int b, c;
	char *p;

	if (str == NULL)
	{
		return (0);
	}
	while (str[b])

	{
		b++;
	}
	p = malloc(sizeof(char) * b + 1);
	if (p == 0)
	{
		return (0);
	}
	for (c = 0; c <= b; c++)
	{
		p[c] = str[c];
	}
	return (p);
}
