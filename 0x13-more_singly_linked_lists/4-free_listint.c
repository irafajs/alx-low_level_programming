#include "lists.h"

/**
 * free_listint - free the allocated memory of function
 * @head: passed ard ad a pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *trav = NULL;

	while (head)
	{
		trav = head->next;
		free(head);
		head = trav;
	}
}

