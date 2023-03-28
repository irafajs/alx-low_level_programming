int _putchar(char c);

/**
 * puts2 - output even nbr in string
 * @str: passed param
 *
 * return: 0 at success
 */

void puts2(char *str)
{
	int la, b;

	la = 0;
	while (str[la] != '\0')
	{
		la++;
	}
	for (b = 0; b < la; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
