#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *trav = NULL;
	
	temp = *head;
	while (*head != NULL)
	{
		trav = *head.next;
		temp->next = temp;
		temp = *head;
		*head = trav;
	}
	*head = temp;
	return (*head);
}
