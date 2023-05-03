#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at define position
 * @head: passed arg as a double pointer
 * @index: passed arg as a index to pointer to a node to delete
 *
 * Return: return 0 when successful or -1 while failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trav;
	listint_t *temp;
	unsigned int counter = 1;

	trav = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = trav->next;
		free(trav);
		return (1);
	}
	while (counter != index)
	{
		trav = trav->next;
		counter++;
	}
	if (index > counter)
	{
		return (-1);
	}
	temp = trav->next;
	if (temp == NULL)
	{
		return (-1);
	}
	trav->next = temp->next;
	free(temp);
	return (1);
}
