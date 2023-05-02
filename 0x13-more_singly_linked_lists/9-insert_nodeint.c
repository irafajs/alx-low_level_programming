#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a designated place
 * @head: passed arg as a double pointer
 * @idx: passed arg as index to where we insert the node
 * @n: passed arg as data to insert to the new node
 *
 * Return: pointer if successful or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav;
	listint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	trav = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	while (counter != idx - 1)
	{
		trav = trav->next;
		counter++;
	}
	if (idx > 0)
	{
		temp->next = trav->next;
		trav->next = temp;
	}
	else if (idx <= 0)
	{
		return (NULL);
	}
	return (temp);
}
