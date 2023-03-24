#include "main.h"
#include <ctype.h>

/**
*_isdigit - print lower alphabet
*@c: accept single char
*
*Description: function check if the chatacter
*passed to it, is digit and print 1 or otherwise print 0
*
*Return: 1 if char is digit. 0 otherwise
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
