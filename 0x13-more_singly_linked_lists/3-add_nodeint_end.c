#include "lists.h"

/**
 * add_nodeint_end - write out the node at the end of a list
 * @head: passed arg as a pointer to a pointer
 * @n: passed arg as the data in a node
 *
 * Return: a pointer at success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *trav;

	trav = malloc(sizeof(listint_t));
	if (trav == NULL)
	{
		return (NULL);
	}
	trav->n = n;
	trav->next = NULL;
	if (*head == NULL)
	{
		*head = trav;
		return (trav);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = trav;
	return (trav);
}


