#include <stdio.h>

/**
 * main - print pair of two
 *
 * Return: 0 at success
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a >= b)
			{
				continue;
			}
			putchar (a + '0');
			putchar (b + '0');
			putchar (' ');
			if (a == 8 && b == 9)
			{
				continue;
			}
			putchar(',');
		}
	}
	putchar ('\n');
	return (0);
}
