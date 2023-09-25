#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to a new node
 * @n: new node
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (new_node != NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
