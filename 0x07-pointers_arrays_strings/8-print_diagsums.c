#include <stdio.h>

/**
 * print_diagsums - output sum of multi_d array
 * @a: passed param
 * @size: passed param
 *
 * return: 0 at success
 */
void print_diagsums(int *a, int size)
{
	int d, tlr = 0, trl = 0;

	for (d = 0; d < size; a++)
	{
		tlr = tlr + a[(d * size) + d];
		trl = trl + a[(size - 1) + ((size - 1) * d)];
	}
	printf("%d, %d\n", tlr, trl);
}
