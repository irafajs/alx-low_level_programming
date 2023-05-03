#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *trav;
	int c;

	if (head == NULL)
	{
		exit (98);
	}
	trav = head;
	while (trav != NULL)
	{
		trav = trav->next;
		c++;
	}
	return (c);
}
