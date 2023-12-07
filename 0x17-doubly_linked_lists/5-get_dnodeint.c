#include "lists.h"
#include <stdio.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of list.
 * @index: is the index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = head;

	i = 0;
	while (curr)
	{
		if (i == index)
		{
			return (curr);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
