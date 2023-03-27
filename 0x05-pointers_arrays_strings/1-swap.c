/**
 * swap_int - swap variable using pointer
 * @a: passed parameter
 * @b: passed parameter
 *
 * return: 0 at success
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	int m = *b;

	*a = m;
	*b = k;
}
