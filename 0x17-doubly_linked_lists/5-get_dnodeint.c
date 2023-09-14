#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at a specific index in a list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve
 *
 * Description: This function returns a pointer to the node at the specified
 * index in a doubly linked list. If the index is out of range or if the list
 * is empty, it returns NULL.
 *
 * Return: If the node at the given index exists, returns a pointer to node.
 * Otherwise, returns NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = head;

	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}

	return (tmp);
}
