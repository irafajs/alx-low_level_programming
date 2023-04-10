#include <stdlib.h>
#include <stdio.h>

/**
 * main - output the passed param
 * @argc: passed counted arguments
 * @argv: passed 1d array arguments
 *
 * Return: 0 at success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
