#include <stdio.h>

/**
 * main - print combination of 3
 *
 * Return: 0 at success
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <=9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a >= b || b >= c)
				{
					continue;
				}
				putchar (a + '0');
				putchar (b + '0');
				putchar (c + '0');
				if (a == 7 && b == 8 && c == 9)
				{
					continue;
				}
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
