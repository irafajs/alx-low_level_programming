int _putchar(char c);

/**
 * _puts - read a string to output
 * @str: parameter passed to a func
 *
 * return: 0 at success
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
