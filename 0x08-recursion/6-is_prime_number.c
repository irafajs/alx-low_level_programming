/**
 * is_prime_number - retun 1 when prime 0 otherwise
 * @n: passed param
 *
 * Return: 1 at success 0 otherwise
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
