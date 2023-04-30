#include "lists.h"

/**
 * add_nodeint - write out the node at beginning of a list
 * @head: passed arg as pointer to a pointer
 * @n: passed int as data handler
 *
 * Return: pointer at success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}

