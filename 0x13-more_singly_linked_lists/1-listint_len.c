#include "lists.h"

/**
 * listint_len - returns the number of elements in a
 * linked list
 * @h: pointer to first node
 *
 * Return: list
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}

	return (a);
}
