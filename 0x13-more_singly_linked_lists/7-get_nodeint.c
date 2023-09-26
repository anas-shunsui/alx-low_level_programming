#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a
 * linked list
 * @head: pointer to first node
 * @index: index of node
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int i;

	for (n = head, i = 0; n && i < index; n = n->next, i++)
		;
	return (n);
}
