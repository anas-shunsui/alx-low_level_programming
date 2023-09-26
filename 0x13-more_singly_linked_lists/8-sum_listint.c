#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of
 * a linked list
 * @head: pointer to the first node
 *
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
