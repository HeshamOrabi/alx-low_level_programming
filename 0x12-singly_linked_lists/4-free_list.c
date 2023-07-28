#include "lists.h"

/**
 * free_list - frees a linked list from heap
 * @head: list_t list to be freed
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head->next);
		free(head);
		head = temp;
	}
}

