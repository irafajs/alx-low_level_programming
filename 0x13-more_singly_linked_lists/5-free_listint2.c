#include "lists.h"

/**
 * free_listint2 - free the memory allocated by head
 * @head: passed arg as a pointer to a pinter
 *
 * Return: nothing
 */
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
		*head = trav->next;
		free(trav);
	}
	*head = NULL;
}

