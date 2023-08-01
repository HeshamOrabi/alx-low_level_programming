#include "lists.h"

/**
 * print_listint - print linked list
 * @h: pointer to head of linked list
 *
 * Return: lenght of linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
