#include "main.h"

/**
 * get_bit - write out the mentioned index of binary given number
 * @n: passed argument as a binary number
 * @index: passed argument as argument to return
 *
 * Return: -1 when it fails and index at success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int def_bit;
	size_t one = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	def_bit = one << index;
	return ((n & def_bit) != 0);
}
