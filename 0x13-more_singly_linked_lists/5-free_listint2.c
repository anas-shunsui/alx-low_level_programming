#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to first node
 *
 * Retuen: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *n, *a;

	if (head == NULL)
		return;

	n = *head;
	while (n)
	{
		a = n;
		n = n->next;
		free(a);
	}
	*head = NULL;
}
