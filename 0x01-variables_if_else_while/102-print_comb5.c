#include <stdio.h>

/**
 * main - compbo of 4;
 *
 * Return: 0 at success
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (b > d)
					{
						continue;
					}
					putchar (a + '0');
					putchar (b + '0');
					putchar (' ');
					putchar (c + '0');
					putchar (d + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
