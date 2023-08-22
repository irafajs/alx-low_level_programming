#include "main.h"
#include <ctype.h>

/**
*_isupper - print capital alphabet
*@c: accept single letter
*
*Description: function check if the chatacter
*passed to it, is lower and print 1 or otherwise print 0
*
*Return: 1 if alphabet is capital. 0 otherwise
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
