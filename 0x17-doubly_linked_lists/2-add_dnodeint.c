#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to a pointer to the head of the list
 * @n: Integer value to be stored in the new node
 *
 * Description: This function creates a new node with integer value 'n'
 * and adds it to the beginning of a doubly linked list. It updates the 'prev'
 * and 'next' pointers accordingly and returns a pointer to the new node.
 *
 * Return: If memory allocation fails or if 'head' is NULL, returns NULL.
 * Otherwise, returns a pointer to the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
