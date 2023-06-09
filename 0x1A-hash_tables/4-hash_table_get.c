#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key in a hash table
 * @ht: hash table to search
 * @key: key to search for
 *
 * Return: the value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
