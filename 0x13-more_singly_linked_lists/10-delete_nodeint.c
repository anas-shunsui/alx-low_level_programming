#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * linked list
 * @head: pointer to the first node
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		return (-1);
		current = current->next;
	}

	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
