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
		return (NULL);
	}
	while (*(str + 1))

	{
		b++;
	}
	p = malloc(sizeof(char) * b + 1);
	if (p == 0)
	{
		return (NULL);
	}
	for (c = 0; c <= b; c++)
	{
		*(p + 1) = *(str + 1);
	}
	return (p);
}
