#include <stdlib.h>
#include <stdio.h>

/**
 * main - output the multiplication of 2 passed argv
 * @argc: passed argument as a counter
 * @argv: passed argument as a 1d array
 *
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int i, a, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 2; i < argc; i++)
		{
			a = atoi(argv[1]);
			mul = a * atoi(argv[i]);
			printf("%i\n", mul);
		}
	}
	return (0);
}



