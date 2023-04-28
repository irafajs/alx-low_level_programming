#include "lists.h"

/**
 * free_list - free the used memory used by ssl
 * @head: passed arg
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ikira;

	if (head == 0)
	{
		return;
	}
	while (head != NULL)
	{
		ikira = head->next;
		free(head->str);
		free(head);
		head = ikira;
	}
}
