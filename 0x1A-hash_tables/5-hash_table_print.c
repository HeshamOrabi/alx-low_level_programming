#include "hash_tables.h"

/**
 * hash_table_print - Prints the content of a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = (ht->array[i]);
		if (tmp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			while (tmp->next)
			{
				tmp = tmp->next;
				printf("'%s': '%s'", tmp->key, tmp->value);
			}
		}
	}
	printf("}\n");
}
