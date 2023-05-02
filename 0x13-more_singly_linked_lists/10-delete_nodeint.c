#include "lists.h"

/**
 * nodeint_at_index - delete a node at define position
 * @head: passed arg as a double pointer
 * @index: passed arg as a index to pointer to a node to delete
 *
 * Return: return 0 when successful or -1 while failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav;
	listint_t *temp;
	unsigned int counter = 0;

	trav = *head;
	if (*head == NULL)
	{
		return (0);
	}
	if (index == 0)
	{
		*head = trav->next;
		free(trav);
		return (0);
	}
	while (counter != index)
	{
		trav = trav->next;
		counter++;
	}
	temp = trav->next;
	trav->next = temp->next;
	free(temp);
	if (index > counter)
	{
		return (-1);
	}
	return (0);
}
