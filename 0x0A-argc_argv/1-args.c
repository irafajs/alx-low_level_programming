#include <stdlib.h>
#include <stdio.h>

/**
 * main - output the passed argument in counted number
 * @argc: passed argument counted in #
 * @argv: passed 1d array
 *
 * Return: 0 at success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
