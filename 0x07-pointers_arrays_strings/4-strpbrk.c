#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - output a part of the original string
 * @s: passed param to return
 * @accept: passed param to compare
 *
 * Return: Null if condition is false or s at success
 */
char *_strpbrk(char *s, char *accept)
{
	char *t;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		t = accept;
		while (*t != '\0')
		{
			if (*s == *t)
			{
				return (s);
			}
			t++;
		}
		s++;
	}
	return (NULL);
}
