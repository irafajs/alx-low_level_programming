/**
 * rev_string - output reveresed string
 * @s: passed param
 *
 * return: 0 at succes
 */

void rev_string(char *s)
{
	char a;
	int b, la, lb;

	la = 0;
	lb = 0;

	while (s[la] != '\0')
	{
		la++;
	}
	lb = la - 1;
	for (b = 0; b < la / 2; b++)
	{
		a = s[b];
		s[b] = s[lb];
		s[lb--] = a;
	}
}
