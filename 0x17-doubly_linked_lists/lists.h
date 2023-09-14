#ifndef lists_h
#define lists_h

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_t - Doubly linked list node structure
 * @n: Integer data stored in the node
 * @next: Pointer to the next node in the list
 * @prev: Pointer to the previous node in the list
 *
 * Description: This structure represents a node in a doubly linked list.
*/
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

#endif
