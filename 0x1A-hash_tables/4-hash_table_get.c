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

	if (!ht || key[0] == '\0' || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	return (ht->array[index]->value);
}
