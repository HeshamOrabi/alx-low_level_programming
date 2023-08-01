#include "lists.h"

/**
 * add_nodeint - adds a new node at strt of linked list
 * @head: pointer to head
 * @n: data of new node
 *
 * Return: pointer to node or NULL in faliure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}

	temp->n = n;

	temp->next = *head;
	*head = temp;

	return (temp);
}
