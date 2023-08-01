#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0, index;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		index = idx - 1;
	}

	temp = *head;

	for (i = 0; temp && i < idx; i++)
	{
		if (i == index)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);

}
