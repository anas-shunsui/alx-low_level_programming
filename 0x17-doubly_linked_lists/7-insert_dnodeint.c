#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer.
 * @idx: The index where the new node should be added.
 * @n: int value to be stored in new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *curr = *h;

	new = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; curr && i < idx - 1; i++)
		curr = curr->next;

	if (curr == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = curr;
	new->next = curr->next;

	if (curr->next)
		curr->next->prev = new;

	curr->next = new;

	return (new);
}
