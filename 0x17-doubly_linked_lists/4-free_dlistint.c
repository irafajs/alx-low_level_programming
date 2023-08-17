#include "lists.h"

/**
 * free_dlistint - free allocated memory in the codes
 * @head: passed parameter as a pointer to the head of the node
 *
 * Return: notbing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
