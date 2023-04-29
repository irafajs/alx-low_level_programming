#include "lists.h"

/**
 * print_listint - write out the data and link of the node
 * @h: passed arg as pointer
 *
 * Return: at success node number
 */
size_t print_listint(const listint_t *h)
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
		printf("%d\n", temp->n);
		c++;
		temp = temp->next;
	}
	return (c);
}
