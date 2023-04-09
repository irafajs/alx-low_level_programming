#include <stdio.h>
#include <stdlib.h>
/**
 * main - return the name of the program
 * @argc: passed count argument
 * @argv: passed 1d array
 *
 * Return: o at success
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
