#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a given key.
 * @ht: The hash table to search.
 * @key: The key to look for in the hash table.
 *
 * Return: The value associated with the key if found, otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key))
		node = node->next;
	if (!node)
		return (NULL);

	return (node->value);
}
