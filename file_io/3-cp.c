#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * error_file - handles file-related errors
 * @code: exit code
 * @filename: name of the file causing the error
 */

void error_file(int code, char *filename)
{
	if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(code);
}

/**
 * error_fd - handles file descriptor errors
 * @code: exit code
 * @fd: file descriptor value
 */

void error_fd(int code, int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(code);
}


/**
 * copy_file - copies the content of one file to another
 * @file_from_name: name of the source file
 * @file_to_name: name of the destination file
 */

void copy_file(const char *file_from_name, const char *file_to_name)
{
	int file_from, file_to;
	ssize_t characters_read, characters_written;
	char buffer[BUFFER_SIZE];

	file_from = open(file_from_name, O_RDONLY);
	if (file_from == -1)
		error_file(98, (char *)file_from_name);

	file_to = open(file_to_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		error_file(99, (char *)file_to_name);
	}

	while ((characters_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		characters_written = write(file_to, buffer, characters_read);
		if (characters_written != characters_read)
		{
			close(file_from);
			close(file_to);
			error_file(99, (char *)file_to_name);
		}
	}

	if (characters_read == -1)
	{
		close(file_from);
		close(file_to);
		error_file(98, (char *)file_from_name);
	}

	if (close(file_from) == -1)
		error_fd(100, file_from);

	if (close(file_to) == -1)
		error_fd(100, file_to);
}


/**
 * main - entry point of the program
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 on success, or exists with an error code on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

