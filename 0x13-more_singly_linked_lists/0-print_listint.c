#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	listint_t *temp = h;

	while (temp)
	{
		printf("%d", h->n);
		len++;
		temp = h->next;
	}
	return (len);
}
