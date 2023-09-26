#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a
 * given position
 * @head: pointer to node
 * @idx: index of the list
 * @n: value of new node
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_n = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (!head || !new_n)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;
	if (idx)
	{
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
	node = *head;
	while (node)
	{
		if ((a == idx) - 1)
		{
			new_n->next = node->next;
			node->next = new_n;
			return (new_n);
		}
		a++;
		node = node->next;
	}
	free(new_n);
	return (NULL);
}
