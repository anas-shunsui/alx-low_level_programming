#include "lists.h"

/**
 * add_node - adds node to the start of list
 * @head: head node
 * @str: string
 *
 * Return: sizof list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_h == NULL)
		return (NULL);

	new_h->str = strdup(str);
	if (new_h->str == NULL)
	{
		free(new_h);
		return (NULL);
	}
	new_h->next = *head;
	*head = new_h;

	return (new_h);
}
