#include "main.h"
#include <stdlib.h>

/**
 * countnum - counts number of words
 * @s: string
 *
 * Return: int of num
 */

int countnum(char *s)
{
	int a, num = 0;

	for  (a = 0; s[a]; a++)
	{
		if (s[a] == ' ')
		{
			if (s[a + 1] != ' ' && s[a + 1] != '\0')
				num++;
		}
		else if (a == 0)
			num++;
	}
	num++;
	return (num);
}

/**
 * strtow - function that splits a string into words
 * @str: string
 *
 * Return: pointer
 */

char **strtow(char *str)
{
	int a, b, c, d, n = 0, w = 0;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = countnum(str);
	if (n == 1)
		return (NULL);
	word = (char **)malloc(n * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[n - 1] = NULL;

