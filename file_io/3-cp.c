#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024


/**
 * print_error - prints error messages and exits with appropriate code
 * @code: exit code
 * @arg: argument related to the error
 */

void print_error(int code, char *arg)
{
	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
	else if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *(int *)arg);
	exit(code);
}


/**
 * close_fd - closes a file descriptor and handles errors
 * @fd: file descriptor to close
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
		print_error(100, (char *)&fd);
}


/**
 * open_file_from - opens the source file for reading
 * @file_from: name of the file to read
 *
 * Return: file descriptor
 */

int open_file_from(char *file_from)
{
	int fd = open(file_from, O_RDONLY);

	if (fd == -1)
		print_error(98, file_from);
	return (fd);
}

/**
 * open_file_to - opens or creates the destination file for writing
 * @file_to: name of the file to write to
 *
 * Return: file descriptor
 */

int open_file_to(char *file_to)
{
	int fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
		print_error(99, file_to);
	return (fd);
}


/**
 * main - entry point that copies content of a file to another
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 on success, exits with relevant code on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, NULL);

	fd_from = open_file_from(argv[1]);
	fd_to = open_file_to(argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			print_error(99, argv[2]);
		}
	}
	if (rd == -1)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		print_error(98, argv[1]);
	}

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
