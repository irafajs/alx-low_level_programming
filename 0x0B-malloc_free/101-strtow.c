#include "main.h"
char **ubuf(int jam, int ub, char *str, char **mur)
{
	int a, v, b;

	b = 0;
	for (a = 0; a < jam; a++)
	{
		v = 0;
		for (; b < ub; b++)
		{
			if (str[0] != ' ' || str[b] != ' ')
			{
				mur[b][v] = str[b];
				v++;
			}
			if (b != 0 && str[b] == ' ' && str[b - 1] != ' ')
			{
				b++;
				break;
			}
		}
		mur[a][v + 1] = '\0';
	}
	mur[jam + 1] = NULL;
	return (mur);
}


char **strtow(char *str)
{
	int ub, a, b, ing, c, jam;
	char **mur;

	ub = jam = b = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[ub] != '\0')
	{
		if (str[0] != ' ')
		{
			jam++;
		}
		if (str[ub] != ' ' && str[ub - 1] == ' ' && ub != 0)
		{
			jam++;
		}
		ub++;
	}
	mur = (char **)malloc(sizeof(char *) * jam + 1);
	if (mur == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < jam; a++)
	{
		ing = 0;
		for (; b < ub; b++)
		{
			if (str[0] != ' ' || str[b] != ' ')
			{
				ing++;
			}
			if (str[b] == ' ' && ing > 0)
			{
				break;
			}
		}
		printf("%d\n", ing);
		mur[a] = (char *) malloc(sizeof(char) * ing + 1);
		if (mur[a] == NULL)
		{
			for (c = a - 1; c >= 0; c--)
			{
				free(mur[c]);
			}
			free(mur);
		}
	}
	mur = ubuf(jam, ub, str, mur);
	return (mur);
}

