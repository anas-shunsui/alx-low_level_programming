#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n);
	}
}
