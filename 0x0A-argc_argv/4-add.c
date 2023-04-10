#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - output the multiplication of 2 passed argv
 * @argc: passed argument as a counter
 * @argv: passed argument as a 1d array
 *
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int i, add;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[i]);
		}
			printf("%i\n", add);
	}
	return (0);
}



