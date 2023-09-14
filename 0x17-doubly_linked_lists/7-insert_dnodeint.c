#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a specific index
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index at which to insert the new node
 * @n: Integer value to be stored in the new node
 *
 * Description: This function inserts a new node with integer value 'n' at
 * the specified index. If the index is out of range, it returns NULL.
 * If the list is empty and idx is not 0, it also returns NULL. If insertion
 * is successful, it returns a pointer to the new node.
 *
 * Return: If the insertion is successful, returns a pointer to the new node.
 * If the index is out of range or memory allocation fails, returns NULL.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		if (!tmp)
			tmp->prev = new;
		tmp = new;
		return (new);
	}

	while (idx && tmp)
	{
		tmp = tmp->next;
		idx--;
	}
	if (!tmp)
	{
		free(new);
		return (NULL);
	}

	new->next = tmp;
	(tmp->prev)->next = new;
	tmp->prev = new;
	new->prev = tmp->prev;

	return (new);

}
