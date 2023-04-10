#include <stdlib.h>
#include <stdio.h>

/**
 * main - output change of passed argv
 * @argc: passed counted argument
 * @argv: passed 1d array
 *
 * Return: 0 at success
 */
int main(int argc, char *argv[])
{
	int a, s, sub, ex;
	int c[7] = {25, 10, 5, 2, 1};

	a = 0;
	s = 0;
	sub = 0;
	ex = 0;
	if (argc < 2)
	{
		printf("Error\n");
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		s = atoi(argv[1]);
		while (c[a] != '\0')
		{
			if (s >= c[a])
			{
				sub = (s / c[a]);
				ex = ex + sub;
				s = s - c[a] * sub;
			}
			a++;
		}
		printf("%d\n", ex);
	}
	return (0);
}
