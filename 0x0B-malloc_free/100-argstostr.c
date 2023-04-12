#include "main.h"
#include <string.h>

/**
 * argstostr - output string by line
 * @ac: passed arg
 * @av: passed 1d array
 *
 * Return: pointer at success
 */
char *argstostr(int ac, char **av)
{
	int a, j, bara, d, g, v;
	char *b;

	v = bara = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (j = 0; av[a][j] != '\0'; j++)
		{
			bara += 1;
		}
		bara += 1;
	}
	bara += 1;
	b = malloc(sizeof(char) * bara);
	if (b == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		for (g = 0; av[d][g] != '\0'; g++)
		{
			b[v] = av[d][g];
			v += 1;
		}
		b[v] = '\n';
		v += 1;
	}
	b[v] = '\0';
	free(b);
	return (b);
}
