#include "main.h"

/**
*positive_or_negative - Entry point
*@i : par for function
*
*description : 'check if a number is neg'
*
*Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	int a = 98;

	if (a > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (a < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
