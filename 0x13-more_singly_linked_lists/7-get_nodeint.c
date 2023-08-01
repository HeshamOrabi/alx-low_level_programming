#include "lists.h"

/**
 * get_nodeint_at_index - locate node at index
 * @head: first node
 * @index: index that need to pe procced
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp && index > i)
	{
		temp = temp->next;
		index--;
	}
	temp = temp ? temp : NULL;

	return (temp);
}
