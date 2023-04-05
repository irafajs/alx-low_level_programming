#include "main.h"

/**
 * _pow_recursion - output x power y
 * @x: passed param to power on
 * @y: passed param to multiply x
 *
 * Return: 0 at success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
