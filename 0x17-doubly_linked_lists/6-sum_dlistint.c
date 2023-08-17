#include "lists.h"

/**
 * sum_dlistint - calculate sum of all node data
 * @head: passed parameter as a pointer to the head of node
 *
 * Return: sum of the node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
