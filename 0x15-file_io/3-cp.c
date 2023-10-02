#include "main.h"

/**
 * cp - Funtion that copies content from from_file to to_file
 * @from_file: Fetches the main file
 * @to_file: Fetches the file to be copied to
 *
 * Return: Nothing
 */

void cp(const char *from_file, const char *to_file)
{
	int fd1, fd2;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	fd1 = open(from_file, O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", from_file);
		exit(98);
	}

	fd2 = open(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", to_file);
		exit(99);
	}

	while ((bytes_read = read(fd1, buffer, 1024)) > 0)
	{
		if (bytes_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", from_file);
			close(fd1);
			close(fd2);
			exit(98);
		}

		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", to_file);
			close(fd1);
			close(fd2);
			exit(99);
		}
	}
	close(fd1);
	close(fd2);
}


/**
 * main - Funtion that pass the args to my cp function
 * @argc: The number of args passed
 * @argv: The args passed "string"
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n");
	else
		cp(argv[1], argv[2]);
	return (0);
}
