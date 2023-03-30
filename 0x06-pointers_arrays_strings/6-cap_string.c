/**
 *cap_string - capitalize string
 *@s: passed param
 *
 *Return: 0 at success
 */

char *cap_string(char *s)
{
	int k, c;
	char sepa[] = " \t\n,;.!?\"(){}";

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (c = 0; sepa[c] != '\0'; c++)
		{
			if (s[k] == sepa[c] && s[k + 1] >= 97 && s[k + 1] <= 122)
			{
			s[k + 1] = s[k + 1] - 32;
			}
		}
	}
	return (s);
}
