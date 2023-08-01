#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of list
 * @head: pointer to first element (head)
 * @n: data to insert
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *search;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}

	temp->n = n;

	if (!(*head))
	{
		*head = temp;
		return (temp);
	}

	search = *head;

	while (search->next)
	{
		search = search->next;
	}

	search->next = temp;
	temp->next = NULL;

	return (temp);
}
