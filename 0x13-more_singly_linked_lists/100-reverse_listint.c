#include "lists.h"

/**
 * reverse_listint - write out the list in reverse order
 * @head: passed arg as a double arg
 *
 * Return: return a pointer at success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *trav = NULL;

	while (*head != NULL)
	{
		trav = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = trav;
	}
	*head = temp;
	return (*head);
}
