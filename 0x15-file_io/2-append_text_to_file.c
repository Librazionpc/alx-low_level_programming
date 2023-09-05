#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Function that append text to end of a file
 * @filename: The file name
 * @text_content: The text to be appended
 * Return: Always 0 (On Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_appended;
	const char *newFile = filename;

	fd = open(newFile, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_appended = write(fd, text_content, strlen(text_content));
		if (bytes_appended == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
