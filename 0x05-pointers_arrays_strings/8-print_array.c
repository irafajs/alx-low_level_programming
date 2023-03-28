#include <stdio.h>

/**
 * print_array - output an array
 * @a: passed param
 * @n: passed param
 *
 * return: 0 at success
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
		{
			printf(", ")
			;
		}
	}
	printf("\n");
}
