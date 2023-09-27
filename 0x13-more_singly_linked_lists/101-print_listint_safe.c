#include "lists.h"

/**
 * print_listint_safe - prints a linked list safely
 * @head: pointer to the head of the list
 *
 * Return: num of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *current = head;
	const listint_t *temp;

	while (current != NULL)
	{
		printf("[%lu] %d\n", i, current->n);
		i++;

		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%lu] %d\n", i, current->n);
			break;
		}
	}

	return (i);
}
