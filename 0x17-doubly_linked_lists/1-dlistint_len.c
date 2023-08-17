#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the list
 * @h: passed argument as a header add to the list
 *
 * Return: number of nodes available in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
