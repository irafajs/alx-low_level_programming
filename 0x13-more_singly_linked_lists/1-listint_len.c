#include "lists.h"
/**
 * listint_len - write out the number of node in the list
 * @h: passed arg as a pointer to the first node
 *
 * Return: the number of node at success
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;
	const listint_t *temp = NULL;

	if (h == NULL)
	{
		return (0);
	}
	temp = h;
	while (temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	return (c);
}

