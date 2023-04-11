#include "main.h"

/**
 * create_array - output the hexadecimal value of H
 * @size: passed param as size
 * @c: passed param
 *
 * Return: hexa at succes, null if error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *hexa;

	if (size <= 0)
	{
		return (NULL);
	}
	hexa = malloc(sizeof(char) * size);
	if (hexa == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hexa[i] = c;
	}
	return (hexa);
}
