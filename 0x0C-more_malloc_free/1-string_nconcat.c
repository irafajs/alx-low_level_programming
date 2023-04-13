#include "main.h"
#include <string.h>

/**
 * string_nconcat - output s1 + s2
 * @s1: passed param as a string
 * @s2: passed param as a string
 * @n: passed param as int to count string len
 *
 * Return: pointer at success null while error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ab;
	unsigned int i, ns;
	char b = strlen(s1) + strlen(s2);

	ab = malloc(sizeof(b) * 6);
	if (ab == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		printf("%c", s1[i]);
	}
	if (n >= strlen(s2))
	{
		for (ns = 0; s2[ns] != '\0'; ns++)
		{
			printf("%c\n", s2[ns]);
		}
	}
	if (n <= strlen(s2))
	{
		for (ns = 0; ns <= n; ns++)
		{
			printf("%c", s2[ns]);
		}
	}
	if (s2 == NULL)
	{
		printf("%c", s2[0]);
	}
	return (ab);
}
