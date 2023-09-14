#include "lists.h"


/**
 * sum_dlistint - Calculates the sum of all elements in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Description: calculates the sum of all the integer values stored
 * in the nodes of a doubly linked list.
 *
 * Return: The sum of all elements in the list. If empty returns 0.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
