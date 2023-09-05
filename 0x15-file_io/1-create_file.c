#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Function that create a file
 * @filename: The file name
 * @text_content: The to written in the file
 *
 * Return: 1 on Success
 */

int create_file(const char *filename, char *text_content)
{
	const char *newFile = filename;
	ssize_t bytes_written = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(newFile, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
			return (-1);
	}

	close(fd);
	return (1);

}
