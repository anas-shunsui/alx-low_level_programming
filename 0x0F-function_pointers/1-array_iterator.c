#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *a = array + size - 1;


	if (array && size && action)
		while (array <= a)
			action(*array++);
}
