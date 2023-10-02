#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "main.h"


int create_file(const char *filename, char *text_content)
{
	int i;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);

	if (text_content != NULL)
	{
		size_t text_length = strlen(text_content);
		ssize_t bytes_written = write(i, text_content, text_length);
		close(i);

		if (bytes_written == -1)
			return (-1);
	}
	else
	{
		close(i);
	}

	return (1);
}
