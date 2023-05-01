#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *trav = NULL;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		trav = *head;
		*head =trav->next;
		free(trav);
	}
	*head = NULL;
}

