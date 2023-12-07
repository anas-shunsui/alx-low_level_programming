#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to doubly linked list
 * @n: int stored in new node
 *
 * Return:  the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
