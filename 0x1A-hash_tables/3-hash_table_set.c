#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table to add or update the element in.
 * @key: The key to identify the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key || !value)
		return (0);

	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->key = strdup(key);
	if (!hn->key)
	{
		free(hn);
		return (0);
	}
	hn->value = strdup(value);
	if(!hn->value)
	{
		free(hn->key);
		free(hn);
		return (0);
	}
	hn->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (!(ht->array[index]))
		ht->array[index] = hn;
	else
	{
		if (!((ht->array[index])->next))
		{
			(ht->array[index])->next = hn;
		}
		else
		{
			tmp = (ht->array[index])->next;
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = hn;
		}
	}
	return (1);
}
