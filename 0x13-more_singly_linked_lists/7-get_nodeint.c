#include "lists.h"

/**
 * get_nodeint_at_index - write out the node data at passed node
 * @head: passed arg as a pointer
 * @index: passed int as a counter to the node index
 *
 * Return: NULL if index does not exist or data of node if index exists.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int kub = 0;
	listint_t *trav;

	trav = head;
	if (trav == NULL)
	{
		return (NULL);
	}
	while (trav != NULL)
	{
		if (kub == index)
		{
			return (trav);
		}
		kub++;
		trav = trav->next;
	}
	return (NULL);
}
