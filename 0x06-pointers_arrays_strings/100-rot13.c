<<<<<<< HEAD
/**
 *rot13 - encrypt output
 *@s: passed param
 *
 *Return: 0 at success
 */
=======
>>>>>>> 8206e9c75b042a2cefb2dc81b63f089ab85a3885
char *rot13(char *s)
{
	char see[100] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char hide[100] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; see[j] != '\0'; j++)
		{
			if (s[i] == see[j])
			{
				s[i] = hide[j];
				break;
			}
		}
<<<<<<< HEAD
=======
	}
>>>>>>> 8206e9c75b042a2cefb2dc81b63f089ab85a3885
		return (s);
	}
