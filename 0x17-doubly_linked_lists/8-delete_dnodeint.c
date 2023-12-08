#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a position.
 * @head: pointer to a pointer.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
		free(curr);
		return (1);
	}

	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (-1);

	tmp = curr->prev;
	tmp->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = tmp;

	free(curr);
	return (1);
}
