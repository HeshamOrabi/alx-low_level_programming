#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function prints all the elements of a doubly linked list
 * and returns the number of nodes in the list.
 *
 * Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
