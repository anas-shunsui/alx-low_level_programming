#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head node
 * @str: string
 *
 * Return: size of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_n)
		return (NULL);
	if (str != NULL)
	{
		new_n->str = strdup(str);
		if (!new_n->str)
		{
			free(new_n);
			return (NULL);
		}
		new_n->len = strlen(new_n->str);
	}
	if (node != NULL)
	{
		while (node->next)
			node = node->next;
		node->next = new_n;
	}
	else
		*head = new_n;
	return (new_n);
}
