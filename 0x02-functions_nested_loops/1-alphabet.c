#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	int AL;

	for (AL = 'a'; AL <= 'z'; AL++)
	{
		putchar(AL);
	}
	putchar('\n');
	return (0);
}
