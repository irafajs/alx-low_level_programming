#include "main.h"

/**
 * set_bit - change indexed bit to 1
 * @n: passed arg as a pointer to the given number
 * @index: passed arg as index to be changed
 *
 * Return: -1 at failure and 1 at success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t def_bit;
	size_t one = 1;

	if (index >= sizeof (unsigned long int) * 8)
	{
		return (-1);
	}
	def_bit = one << index;
	*n = *n | def_bit;
		return (0);
}
