#include "lists.h"

/**
 * add_dnodeint_end - add a node at end of the list
 * @head: passed parameter as a double pointer to head add
 * @n: passed parameter as a data of the node
 *
 * Return: Return a stuct ppointer at success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *current;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		printf("no memory allocation failed");
		return (NULL);
	}
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*head == NULL)
	{
		(*head) = temp;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
		temp->prev = current;
	}
	return (temp);
}

