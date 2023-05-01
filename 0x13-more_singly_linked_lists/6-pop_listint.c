#include "lists.h"

/**
 * pop_listint - delete the first node of the list
 * @head: passed arg as a double poitnter
 *
 * Return: 0 at success
 */
int pop_listint(listint_t **head)
{
	listint_t *trav;
	int a;

	trav = *head;
	a = trav->n;
	if (*head == NULL)
	{
		return (0);
	}
	else
	{

		*head = trav->next;
		free(trav);
		trav = NULL;
	}
	return (a);
}