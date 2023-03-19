# include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0;
	int sep = 0, sep1 = 0;

	sep = ',';
	sep1 = ' ';

	while (a < 10)
	{
		putchar('0' + a);
		++a;
		putchar(sep);
		putchar(sep1);
	}
	putchar('\n');
	return (0);
}
