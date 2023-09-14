#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer value to be stored in the new node
 *
 * Description: This function creates a new node with integer value 'n'
 * and adds it to the end of a doubly linked list.
 * It updates the 'prev' and 'next'
 * pointers accordingly and returns a pointer to the new node.
 *
 * Return: If memory allocation fails, returns NULL. Otherwise,
 * returns a pointer to the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;
	new->prev = tmp;

	return (new);
}
