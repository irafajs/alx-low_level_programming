#include "lists.h"

/**
 * list_len - write out the number of the struct
 * @h: passed param as a pointer
 *
 * Return: size_t when success
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		h = h->next, count++;
	}
	return (count);
}
