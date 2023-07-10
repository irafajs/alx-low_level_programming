#include "main.h"

/**
 * clear_bit - change indexed bit to 0
 * @n: passed arg as a pointer to the given number
 * @index: passed arg as index to be changed
 *
 * Return: -1 at failure and 1 at success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t def_bit;
	size_t one = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		def_bit = one << index;
		*n = *n & ~def_bit;
		return (1);
	}
	return (0);
}

