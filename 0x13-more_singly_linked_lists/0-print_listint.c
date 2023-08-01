#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len;
	listint_t *temp;

	while (temp)
	{
		printf("%d", h->n);
		len++;
		temp = h->next;
	}
	return (len);
}
