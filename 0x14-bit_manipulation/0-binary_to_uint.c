#include "main.h"

/**
 * binary_to_uint - write out the corresponding decimal number to given binary
 * @b: passed arg as a pointer to the string
 *
 * Return: converted int if success or 0 when the string contains a non int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decnum = 0, c;

	for (c = 0; b[c] != '\0'; c++)
	{
		decnum = decnum << 1;
		if (b[c] == '1')
		{
			decnum = decnum | 1;
		}
		else if (b[c] != '0')
		{
			return (0);
		}
	}
	return (decnum);
}
