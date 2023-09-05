#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Fuction that read text from a file
 * @letters: The text to printed
 * @filename: The file
 * Return: The chars_printed int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read = 0, bytes_written = 0;
	size_t total_bytes_read = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		close(file_descriptor);
		return (0);
	}
	while ((bytes_read = read(file_descriptor, buffer, (sizeof(buffer)) - 1)) > 0)
	{
		if (bytes_read == -1)
		{
			close(file_descriptor);
			return (total_bytes_read);
		}
		if (total_bytes_read + bytes_read > letters)
			bytes_read = letters - total_bytes_read;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1 || bytes_read < bytes_written)
		{
			close(file_descriptor);
			return (total_bytes_read);
		}
		total_bytes_read += bytes_read;
		if (total_bytes_read >= letters)
			break;
	}
	close(file_descriptor);
	return (total_bytes_read);
}
