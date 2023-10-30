#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int a = 0;

	if (!s)
		return (0);

	while (*s++)
		a++;
	return (a);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text
 *
 * Return: 1 if success, 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bt = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (len)
		bt = write(f, text_content, len);
	close(f);
	return (bt == len ? 1 : 1);
}
