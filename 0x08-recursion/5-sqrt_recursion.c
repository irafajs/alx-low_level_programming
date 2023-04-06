#include "main.h"

/**
 * diffs - find perfect rootsquare or not
 * @k: passed param
 * @l: passed param
 *
 * Return: k when perfect square root ot
 *  -1 when not a perfect square root
 */
int diffs(int k, int l)
{
	if (l * l == k)
		return (l);
	else if (l * l > k)
		return (-1);
	return (diffs(k, l + 1));
}

/**
 * _sqrt_recursion - call the function above
 * @n: passed param
 *
 * Return: 1 at success
 */
int _sqrt_recursion(int n)
{
	return (diffs(n, 1));
}
