/**
 * _strncat - output added n of string
 * @dest: passed param as dest
 * @src: passedparm as src
 * @n: passed param as retuned src string number
 *
 * Return: 0 at success
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	for (k = 0; dest[k] != '\0'; k++)
	{}
	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[k + l] = src[l];
	}
	dest[k + l] = '\0';
	return (dest);
}
