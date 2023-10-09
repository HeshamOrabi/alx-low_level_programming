#include "hash_tables.h"

/**
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht)
		return (0);

	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->key = (char *)key;
	hn->value = (char *)value;
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
			if (!tmp->next)
				tmp = tmp->next;

			tmp->next = hn;
		}
	}
	return (1);
}
