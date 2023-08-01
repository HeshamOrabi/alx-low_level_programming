#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0, index = idx - 1;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	temp = *head;
	while (index > i)
	{
		temp = temp->next;
		index--;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
