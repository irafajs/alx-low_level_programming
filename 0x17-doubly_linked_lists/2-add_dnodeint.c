#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of the list
 * @head: passed argument as a head addr of the node
 * @n: passed argument as data of the node
 *
 * Return: a pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		printf("no memory allocation");
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	temp->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
