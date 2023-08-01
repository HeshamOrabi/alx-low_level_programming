#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
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

	search = *head;

	while (search)
	{
		search = search->next;
	}

	search->next = temp;
	temp->next = NULL;

	return (temp);
}
