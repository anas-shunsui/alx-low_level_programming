#include "lists.h"

/**
 * _strlen - length of string
 * @st: string
 *
 * Return: length of str


int _strlen(char *st)
{
	int a = 0;

	if (!a)
		return (0);
	while (*st++)
		a++;
	return (a);
}
**/
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
