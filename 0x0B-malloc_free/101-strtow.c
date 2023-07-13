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
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (i == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
				;
			b++;
			word[w] = (char *)malloc(b * sizeof(char));
			b--;
			if (word[w] == NULL)
			{
				for (c = 0; c < w; c++)
					free(word[c];
				free(word[a - 1]);
				free(word);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				word[w][d] = str[a + d];
			word[w][d] = '\0';
			w++;
			a = a + b;
		}
		else
			a++;
	}
	return (word);
}
