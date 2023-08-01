#include "lists.h"

/**
 * free_listint2 - frees each node of a linked list
 * @head: pointer to pointer derefto get head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
