#include "main.h"

/**
 * _strchr - output the cut tring
 * @s: char to be cut
 * @c: parm to look for, for a cut
 *
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	while( *s != '\0')
	{
		if (*s == c)
		{
			return (char *) s;
			s++;
		}
	}
	return (s);
}
