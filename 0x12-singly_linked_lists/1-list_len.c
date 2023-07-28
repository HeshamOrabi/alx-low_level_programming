#include "lists.h"

/**
 * list_len - print num of nodes
 * @h : pointer to head of a list
 *
 * Return: number of nodes in a list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
