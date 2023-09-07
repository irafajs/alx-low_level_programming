#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value  of a paticular a key.
 * @ht: The hash table to search.
 * @key: The key to look for.
 *
 * Return: The value or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}

