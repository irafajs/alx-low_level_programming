#include "main.h"

int main(int argc, char *argv[])
{
	int i, a, b, mul;
	char c[8] = "Error";
	char *ma;

	if (argc <= 1)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			_putchar(c[i]);
		}
		_putchar('\n');
		exit (98);
	}
	for (b = 0; b < argc; b++)
	{
		if (!(isdigit(*argv[b])))
		{
			for (i = 0; c[i] != '\0'; i++)
			{
				_putchar(c[i]);
			}
		}
		_putchar('\n');
		exit (98);
	}
	for (i = 0; *argv[i] != '\0'; i++)
	{
		ma = malloc(sizeof(int) * *argv[i]);
		if (ma == NULL)
		{
			return(0);
		}
	}
	for (i = 2; i < argc; i++)
	{
		a = atoi(argv[1]);
		mul = a * atoi(argv[i]);
		_putchar (mul);
		_putchar ('\n');
	}
	free(ma);
	return (0);
}
