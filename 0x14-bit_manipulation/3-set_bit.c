#include "main.h"

/**
 * set_bit - change the bit at a given index to one
 * @n: passed arg as a pointer to the number to be changed
 * @index: the index at which 1 will be set at.
 *
 * Return: 1 if success or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index == 0 || index != 0)
	{
		i = 1 << index;
		*n |= i;
		return (1);
	}
	else
		return (-1);
}

