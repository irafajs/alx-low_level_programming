/**
 *leet - encode to 1337
 *@s: passed par
 *
 *Return: 0 at success
 */
char *leet(char *s)
{
	char alpArr[] = "a4A4e3e3o0O0t7t71L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpArr[j] != '\0'; j++)
		{
			if (s[i] == alpArr[j])
			{
				s[i] = alpArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
