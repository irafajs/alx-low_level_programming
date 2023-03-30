/**
 *leet - encode to 1337
 *@s: passed par
 *
 *Return: 0 at success
 */
char *leet(char *s)
{
	char *h = s;
	char m[] = {'a', 'e', 'o', 't', 'l'};

	char l[] = {4, 3, 0, 7, 1};
	int k;

	while (*s)
	{
		for (k = 0; k < 5; k++)
		{
			if (*s == m[k] || *s == m[k] - 32)
				*s = l[k] + '0';
		}
		s++;
	}
	return (h);
}
