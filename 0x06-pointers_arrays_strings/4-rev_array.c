/**
 *reverse_array - reverse given array
 *@a: passed param
 *@n: passed param
 *
 *Return: 0 at success
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n / 2; b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
}
