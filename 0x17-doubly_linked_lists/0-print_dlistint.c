#include "lists.h"

/**
 * print_dlistint - print the node number and date in nodes
 * @h: passed argumnent as head pointer to the first node
 *
 * Return: return the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
