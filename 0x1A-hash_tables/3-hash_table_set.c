#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}


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

	if (!ht)
		return (0);

	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->key = strdup((char *)key);
	hn->value = strdup((char *)value);
	hn->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (!(ht->array[index]))
		ht->array[index] = hn;
	else
	{
		tmp = ht->array[index];
		if (strcmp(tmp->key, key) == 0)
		{
			hn->next = tmp->next;
			ht->array[index] = hn;
			free_node(tmp);
			return (1);
		}
		while (tmp->next && strcmp(tmp->next->key, key))
			tmp = tmp->next;
		if (strcmp(tmp->key, key) == 0)
		{
			hn->next = tmp->next->next;
			free_node(tmp->next);
			tmp->next = hn;
		}
		else
		{
			hn->next = ht->array[index];
			ht->array[index] = hn;
		}
	}
	return (1);
}
