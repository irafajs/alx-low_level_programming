#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: passwed param as a string of binary number
 *
 * Return: 0 when non binary present and converted when successful
 */
unsigned int binary_to_uint(const char *b)
{
	size_t converted = 0;
	size_t last_num;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		last_num = *b - '0';
		converted = (converted * 2) + last_num;
		b++;
	}
	return (converted);
}
