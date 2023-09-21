#include "lists.h"

void _pre_message(void) __attribute__ ((constructor));

/**
 * _pre_message - execute before main
 *
 * Return: nothing
 */

void _pre_message(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
