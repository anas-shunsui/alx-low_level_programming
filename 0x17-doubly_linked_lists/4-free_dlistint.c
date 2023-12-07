#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of list.
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *count;

	while (head)
	{
		count = head;
		head = head->next;
		free(count);
	}
}
