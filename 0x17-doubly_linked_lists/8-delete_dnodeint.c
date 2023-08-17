#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given number
 * @head: passed param as a double pointer to the head of node
 * @index: index at position the node should be deleted
 *
 * Return: 1 at success, -1 when fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *current = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL && count != index)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	current = temp->next;
	if (current != NULL)
	{
		current->prev = temp->prev;
	}
	temp->prev->next = current;
	free(temp);
	return (1);
}
