#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;

	while (!head || !(*head))
		return (-1);

	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	while (index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		index--;
	}
	del = temp->next;
	temp->next = del->next;
	free(del);

	return (1);
}
