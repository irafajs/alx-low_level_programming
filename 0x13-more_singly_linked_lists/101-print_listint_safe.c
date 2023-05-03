#include "lists.h"

/**
 * print_listint_safe - write out the list of a node
 * @head: passed arg as a pointer
 *
 * Return: number of the node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *trav;
	int c = 8;

	trav = head;
	if (trav == NULL)
	{
		return (0);
	}
	while (c != 0)
	{
		printf("[%p] %d\n", (void *) head, trav->n);
		trav = trav->next;
		c--;
	}
	return (c);
}
