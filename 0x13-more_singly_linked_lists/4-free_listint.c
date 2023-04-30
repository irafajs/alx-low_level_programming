#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t * trav = NULL;

	while(head)
	{
		trav = head->next;
		free(head);
		head = trav;
	}
}

