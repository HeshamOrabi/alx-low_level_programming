#include "lists.h"

/**
 * dlistint_len - get element list
 * @h: Pointer to the head of the list
 *
 * Description: This function returns the number of nodes in the list.
 *
 * Return: The number of nodes in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
