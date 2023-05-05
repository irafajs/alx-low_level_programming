#include "main.h"

/**
 * get_bit - return the bit at designated index
 * @n: passed arg as number where we get our bit
 * @index: passed arg as index
 *
 * Return: value at index if success, -1 at error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int trav = 1, rn, i;

	if (index != 0 || index == 0)
	{
	i = trav << index;
	rn = (n & i) ? 1 : 0;
	return (rn);
	}
	else if (index > n)
	{
		return (-1);
	}
	else 
		return (-1);
}
