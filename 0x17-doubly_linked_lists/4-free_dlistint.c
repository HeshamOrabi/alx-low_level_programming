#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list of dlistint_t nodes
 * @head: Pointer to the head of the list
 *
 * Description: This function takes the pointer to the head of a doubly linked
 * list and frees each node in the list, including the head node.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *now= head, *next;

	while (now)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
