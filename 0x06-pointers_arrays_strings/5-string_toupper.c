/**
 *string_toupper - change output to upper
 *@str: passed param to func
 *
 *Return: 0 at success
 */
char *string_toupper(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		if (str[m] >= 'a' && str[m] <= 'z')
		{
			str[m] = str[m] - 32;
		}
	}
	return (str);
}
