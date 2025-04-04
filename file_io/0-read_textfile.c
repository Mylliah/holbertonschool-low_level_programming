#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints in standard output
 * @filename: name of the file to read
 * @letters: numbers of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *text_buffer;
	ssize_t characters_read;
	ssize_t characters_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	text_buffer = malloc(sizeof(char) * letters);
	if (text_buffer == NULL)
	{
		close(fd);
		return (0);
	}

	characters_read = read(fd, text_buffer, letters);
	if (characters_read == -1)
	{
		free(text_buffer);
		close(fd);
		return (0);
	}

	characters_written = write(STDOUT_FILENO, text_buffer, characters_read);
	if (characters_written == -1 || characters_written != characters_read)
	{
		free(text_buffer);
		close(fd);
		return (0);
	}

	free(text_buffer);
	close(fd);
	return (characters_written);
}
