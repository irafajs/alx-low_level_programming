#include <ctype.h>
#include "main.h"

/**
*_isalpha - print lower alphabet
*@c: accept single int
*
*Description: function check if the chatacter
*passed it, is alphabet and print 1 or otherwise print0
*
*Return: 1 if it is alphabet. 0 otherwise
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
