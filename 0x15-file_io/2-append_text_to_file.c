#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_appended;
	const char *newFile = filename;

	fd = open(newFile, O_WRONLY | O_CREAT | O_APPEND);

	bytes_appended = write(fd, text_content, (strlen(text_content) - 1));
	if (bytes_appended == -1)
		return (-1);
	close(fd);
	return 0;
}
