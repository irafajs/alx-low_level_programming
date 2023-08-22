#include "main.h"

/**
 * _strstr - return matched string
 * @haystack: passed string
 * @needle: passed string to compare to the first
 *
 * Return: 0 at success
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;

	a = strstr(haystack, needle);
	return (a);
}
