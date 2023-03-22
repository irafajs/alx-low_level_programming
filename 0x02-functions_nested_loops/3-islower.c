#include <ctype.h>
#include "main.h"

/**
*_islower - print lower alphabet
*@c: accept single letter
*
*Description: function check if the chatacter
*passed it, is lower and print 1 or otherwise print0
*
*Return: 1 if alphabet is lower case. 0 otherwise
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
