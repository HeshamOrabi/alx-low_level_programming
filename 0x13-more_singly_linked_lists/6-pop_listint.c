#include "lists.h"

/**
 * pop_listint - frees the head node
 * @head: dup pointer deref to get head
 *
 * Return: the data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!(*head) || !head)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
