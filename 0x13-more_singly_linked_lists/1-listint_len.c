#include "lists.h"

/**
 * listint_len - get list count
 * @h: pointer to linked list
 *
 * Return: lenght of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
