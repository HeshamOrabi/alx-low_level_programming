#include "lists.h"

/**
 * add_node_end - function to add node to the end of list
 * @head: pointer to pointer of the head
 * @str: str pointer
 * Return: pointer to head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, tmp;
	int len = 0;

	while (str[len])
	{
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;

	newNode->next = NULL;

	
	if (*head == NULL)
	{
		*head = newNode;
		return (new);
	}

	while (tmp->next)
	{
		tmp = tmp->next
	}

	temp->next = newNode;

	return (newNode);
}
