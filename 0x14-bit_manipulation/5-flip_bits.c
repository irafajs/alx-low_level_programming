#include <stdio.h>

/**
 * flip_bits - write out the number to be flipped to make similar output
 * @n: passed arg 1
 * @m: passed arg 2
 *
 * Return: number to be changed at success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t flipped;
	size_t count_f = 0;

	flipped = n ^ m;
	while (flipped != 0)
	{
		count_f += flipped & 1;
		flipped >>= 1;
	}
	return (count_f);
}
