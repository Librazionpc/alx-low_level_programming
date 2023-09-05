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
	size_t char_to_printed = 0, char_printed = 0;
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
			return (0);
		}
		char_to_printed = bytes_read;
		if (letters < char_to_printed)
			char_to_printed = letters;
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1
		|| bytes_read > bytes_written
		|| bytes_read > bytes_written)
		{
			close(file_descriptor);
			return (0);
		}
		char_printed += char_to_printed;
	}
	close(file_descriptor);
	return (char_printed);
}
