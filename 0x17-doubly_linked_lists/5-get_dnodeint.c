#include "lists.h"

/**
 * get_dnodeint_at_index - return a node at given index
 * @head: passed parameter as a pointer to head of the node
 * @index: passed parameter as index to return
 *
 * Return: a node at given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (head != NULL)
	{
		temp = temp->next;
		count++;
		if (index == count)
		{
			return (temp);
		}
	}
	return (temp);
}
