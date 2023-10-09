#include "hash_tables.h"

/**
 * key_index - the index at which a key should be stored in the hash table.
 * @key: The key to be hashed.
 * @size: The size of the hash table.
 *
 * Return: The index where the key should be stored.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
