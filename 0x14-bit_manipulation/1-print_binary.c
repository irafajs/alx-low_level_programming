#include "main.h"

/**
 * print_binary - write out the converted desimanl to binary
 * @n: passed argument representing passed decimal
 *
 * Retur: nothing
 */
void print_binary(unsigned long int n)
{
	int size;
	size_t op_res;
	int  finess;
	size_t one = 1;
	unsigned int result;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	size = sizeof(unsigned long int) * 8;
	op_res = one << (size - 1);
	finess = 1;
	while (op_res != 0)
	{
		if ((n & op_res) != 0 || !finess)
		{
			result = (n & op_res) != 0;
			_putchar ('0' + result);
			finess = 0;
		}
		op_res >>= 1;
	}
}
