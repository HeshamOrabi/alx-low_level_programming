#include "lists.h"

/**
 * delete_nodeint_at_index -free node at position
 * @head: pointer to the first element
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del = NULL;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		i++;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);

	return (1);
}
