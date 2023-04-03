#include <string.h>
#include "main.h"

/**
 * _memcpy - output a copied block of char
 * @dest: destination add
 * @src: source address
 * @n: passed param of code to be copied
 *
 * Return: 0 at success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
