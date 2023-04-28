#include "lists.h"
int _adjcfunc(const char *k)
{
	int a = 0;
	while (k[a] != '\0')
	{
		a++;
	}
	return (a);
}
char *point2next(const char *str)
{
	int b = 0, a;
	char *k;

	if (str == NULL)
	{
		return (0);
	}
	while (*(str + 1))
	{
		a++;
	}
	k = malloc(sizeof(char) * 1 + 1);
	if (k == 0)
	{
		return (0);
	}
	for ( a = 0; a <= b; a++)
	{
		*(k + a) = *(str + a);
	}
	return (k);
}
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int ubu;

	ubu = _adjcfunc(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = ubu;
	new->next = *head;
	*head = new;
	return (new);
}
