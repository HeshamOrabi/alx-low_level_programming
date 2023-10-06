#include "hash_tables.h"

/**
 * hash_table_set - Add or update a key-value pair in a hash table
 * @ht: The hash table
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int index;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array[index]) == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
