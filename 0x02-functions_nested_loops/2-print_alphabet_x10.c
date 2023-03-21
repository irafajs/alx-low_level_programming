#include "main.h"

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int c = 0;
	char p;

	while (c < 10)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			printf("%c", p);
		}
		printf("\n");
		c++;
	}
}
