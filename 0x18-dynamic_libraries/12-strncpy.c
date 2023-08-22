#include "main.h"

/**
 *_strncpy - output a copy of the string src to dest
 *@dest: passed param dest
 *@src: passed param src
 *@n: passed param
 *
 * Return: 0 at success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
