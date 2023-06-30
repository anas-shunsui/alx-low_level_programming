#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: changed string
 */

char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;

		if (str[ind - 1] == ''||
				str
