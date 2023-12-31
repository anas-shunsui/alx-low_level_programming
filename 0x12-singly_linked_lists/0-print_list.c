#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str != NULL ? h->str : "(nil)"));
		h = h->next;
		s++;
	}
	return (s);
}
