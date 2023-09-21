#include "lists.h"

/**
 * _strlen - length of string
 * @str: string
 *
 * Return: length of str
 */

int _strlen(char *str)
{
	int a = 0;

	if (!a)
		return (0);
	while (*str++)
		a++;
	return (a);
}

/**
 * print_list - prints all elements of a list
 * @h: node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}
