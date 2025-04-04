#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t characters_written;
	int text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;

		characters_written = write(fd, text_content, text_len);
		if (characters_written == -1 || characters_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
