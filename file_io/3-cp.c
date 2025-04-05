#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_close - safely closes a file descriptor
 * @fd: file descriptor
 */
void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content from file_from to file_to
 * @arc: number of args
 * @arv: array of args
 *
 * Return: 0 on success, exits with codes 97-100 on error
 */
int main(int arc, char **arv)
{
	int fd_from, fd_to;
	ssize_t characters_read, characters_written;
	char buffer[1024];

	if (arc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(arv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]), exit(98);

	fd_to = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((characters_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		characters_written = write(fd_to, buffer, characters_written);
		if (fd_to == -1 || characters_written != characters_read)
			check_close(fd_from),
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]),
			exit(99);
	}

	if (characters_read == -1)
		check_close(fd_from),
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]),
		exit(98);

	check_close(fd_from);
	check_close(fd_to);
	return (0);
}
