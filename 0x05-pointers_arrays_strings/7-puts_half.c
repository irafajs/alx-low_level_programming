int _putchar(char c);
/**
 * puts_half - output second half of str
 * @str: passed parm
 *
 * return: 0 at success
 */

void puts_half(char *str)
{
	int la, b, c;

	la = 0;
	while (str[la] != '\0')
	{
		la++;
	}
	if (la % 2 == 0)
	{
		for (c = la / 2; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
	}
	else if (la % 2)
	{
		for (b = (la - 1) / 2; b < la - 1; b++)
		{
			_putchar(str[b + 1]);
		}
	}
	_putchar('\n');
}
