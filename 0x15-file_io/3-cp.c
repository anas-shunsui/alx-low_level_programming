#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 1 if success, 0 on failure
 */

int main(int ac, char **av)
{
	int from_file = 0, to_file = 0;
	ssize_t a;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_file = open(av[1], O_RDONLY);
	if (from_file == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (to_file == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((a = read(from_file, buf, READ_BUF_SIZE)) > 0)
		if (write(to_file, buf, a) != 0)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (a == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	from_file = close(from_file);
	to_file = close(to_file);
	if (from_file)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file), exit(100);
	if (to_file)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file), exit(100);

	return (EXIT_SUCCESS);
}

