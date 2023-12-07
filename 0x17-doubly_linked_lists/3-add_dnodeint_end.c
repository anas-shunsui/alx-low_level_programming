#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to doubly linked list;
 * @n: int stored in new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!curr)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (curr->next)
			curr = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
