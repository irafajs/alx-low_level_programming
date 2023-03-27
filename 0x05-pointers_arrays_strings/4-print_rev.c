int _putchar(char c);

/**
 * print_rev - output reversed string
 * @s: passed parameter
 *
 * return: 0 at success
 */

void print_rev(char *s)
{
	int a, b, len;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	len = a;
	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
