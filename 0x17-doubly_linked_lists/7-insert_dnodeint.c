#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given position index
 * @h: passed parameter as a double pointer to head of the node
 * @idx: passed parameter as a index to where we have to insert new node
 * @n: data to be inserted
 *
 * Return: new node when successful or NULL when it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *current, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Memory allocation failed to set");
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new_node);
	}
	temp = (*h);
	while (temp != NULL && count != idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	current = temp->next;
	temp->next = new_node;
	current->prev = new_node;
	new_node->next = current;
	new_node->prev = temp;
	return (new_node);
}
