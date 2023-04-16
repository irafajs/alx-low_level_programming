#include "main.h"

/**
 * void - output the 9 timetable
 *
 * Return: o at success
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			printf("%d", c);
			if (b == 9)
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}
