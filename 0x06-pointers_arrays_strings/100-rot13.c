#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @a: pointer
 *
 * Return: *a
 */

char *rot13(char *a)
{
	int  i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotdata[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == data[j])
			{
				a[i] = rotdata[j];
				break;
			}
		}
	}

	return (a);
}
