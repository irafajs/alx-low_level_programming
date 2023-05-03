#include "lists.h"

/**
 * free_listint_safe - free the list
 * @h: passed arg as a bdouble pointer
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *trav;
	listint_t *temp;
	size_t kub;

	if (*h == NULL)
	{
		return (0);
	}
	trav = *h;
	while (trav != NULL)
	{
		temp = trav;
		trav = temp->next;
		kub++;
		free(temp);
	}
	*h = NULL;
	return (kub);
}


