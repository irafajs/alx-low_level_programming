#include "lists.h"

/**
 * sum_listint - write out the sum of data in all the nodes
 * @head: passed arg as a pointer
 *
 * Return: sum at success, NULL while list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *trav;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	trav = head;
	while (trav != NULL)
	{
		sum = sum + trav->n;
		trav = trav->next;
	}
	return (sum);
}
