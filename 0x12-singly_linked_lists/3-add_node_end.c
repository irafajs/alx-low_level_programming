#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	int a = 0;
	list_t *new, *k;

	while (str[a])
	{
		a++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = a;
	new->next = NULL;
	if(strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		k = *head;
		while (k->next != NULL)
		{
			k = k->next;
		}
		k->next = new;
		return (new);
	}
}
