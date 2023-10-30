#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t bt;
	char buf[READ_BUF_SIZE * 8];

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	bt = read(i, &buf[0], letters);
	bt = write(STDOUT_FILENO, &buf[0], bt);
	close(i);
	return (bt);

	if (!filename || !letters)
		return (0);
}
