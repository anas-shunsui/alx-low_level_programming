#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: pointer to first node
 *
 * Return: popped node
 */

int pop_listint(listint_t **head)
{
	listint_t *n;
	int i;

	if (!head || !*head)
		return (0);
	n = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = n;
	return (i);
}
