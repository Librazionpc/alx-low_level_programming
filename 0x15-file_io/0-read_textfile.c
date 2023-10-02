#include "main.h"
#define MAX_BUFFER_SIZE 128

/**
 *
 *
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char input_buffer[MAX_BUFFER_SIZE];
	ssize_t bytes_read = 0, bytes_written;
	size_t len = 0;
	int fd, i = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (letters <= 0)
		return (0);

	while (letters > 0 && (bytes_read = read(fd, input_buffer, letters - bytes_read)) > 0)
	{
		printf("how mamy rounds [%d]\n", i++);
		if (bytes_read < 0)
		{
			close (fd);
			return (0);
		}
		len += bytes_read;
		if (len <= letters)
			input_buffer[len] = '\0';
		bytes_written = write(1, input_buffer, bytes_read);
		if (bytes_written < 0)
		{
			close(fd);
			return (0);
		}
		printf("check%ld\n", letters);
	}
	close(fd);
	return (len);
}
