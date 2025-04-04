#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - prints an error message and exits with a specific code
 * @message: error message to print
 * @filename: name of the file causing the error
 * @exit_code: exit code to use when exiting the program
 */

void handle_error(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(exit_code);
}

/**
 * copy_file - copies the content of one file to another
 * @file_from_name: name of the source file
 * @file_to_name: name of the destination file
 */

void copy_file(const char *file_from_name, const char *file_to_name)
{
	int file_from, file_to;
	ssize_t characters_read;
	ssize_t characters_written;
	char buffer[BUFFER_SIZE];

	file_from = open(file_from_name, O_RDONLY);
	if (file_from == -1)
		handle_error("Error: Can't read from file", file_from_name, 98);

	file_to = open(file_to_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		handle_error("Error: Can't write to", file_to_name, 99);
	}

	while ((characters_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		characters_written = write(file_to, buffer, characters_read);
		if (characters_written != characters_read)
		{
			close(file_from);
			close(file_to);
			handle_error("Error: Can't write to", file_to_name, 99);
		}
	}

	if (characters_read == -1)
	{
		close(file_from);
		close(file_to);
		handle_error("Error: Can't read from file", file_from_name, 98);
	}

	if (close(file_from) == -1)
		handle_error("Error: Can't close fd", file_from_name, 100);

	if (close(file_to) == -1)
		handle_error("Error: Can't close fd", file_to_name, 100);
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

