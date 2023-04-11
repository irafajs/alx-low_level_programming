#include "main.h"

/**
 * str_concat - output concatination of 2 string
 * @s1: passed param
 * @s2: passed param
 *
 * Return: ripe at success, NULL at error
 */
char *str_concat(char *s1, char *s2)
{
	int a, u, k;
	char *ripe;
	char *v = "";

	a = u = k = 0;
	if (s1 == NULL || s2 == NULL)
	{
		s1 = s2 = v;
	}
	while (s1[a] != '\0')
	{
		a++;
		u++;
	}
	a = 0;

	while (s2[a] != '\0')
	{
		a++;
		k++;
	}

	ripe = malloc(sizeof(char) * (u + k + 1));
	if (ripe == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < u; a++)
	{
		ripe[a] = s1[a];
	}
	for (a = 0; a < k; a++)
	{
		ripe[a + u] = s2[a];
	}
	ripe[a + u] = '\0';
	return (ripe);
}
