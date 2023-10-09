#include "hash_tables.h"

/**
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	return (ht->array[index]->value);
}
