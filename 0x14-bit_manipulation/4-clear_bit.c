#include "main.h"

/**
 * clear_bit - change the bit at given index to 0
 * @n: passed arg as a pointer to the number to be changed
 * @index: index to be set to 0
 *
 * Return: 1 at success or 0 where error exist
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
	{
		return (-1);
	}
	else if (index == 0 || index != 0)
	{
		i = ~(1 << index);
		*n &= i;
	}
	return (1);
}
