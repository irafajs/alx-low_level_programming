/**
 * _strlen - print the length of str
 * @s: passed pointer of char
 *
 *Return: 0 at success
 */

int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{}
	return (k);
}
