#include "lists.h"

/**
 * _adjcfunc - calculate the stringth lenght
 * @k: passed argument as pointer
 *
 * Return: int at success
 */
int _adjcfunc(const char *k)
{
	int a = 0;

	while (k[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * add_node - write out the node of a list
 * @head: head ppointer to the next mem of a node
 * @str: passed arg
 *
 * Return: a pointer at success
 */
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
