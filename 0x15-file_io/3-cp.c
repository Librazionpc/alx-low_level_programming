#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>

void cp_function(const char *file1, const char *file2);
/**
 * main - program that copies the content of a file to another file.
 * @ac: Number of argument passed
 * @av: arrays of the arugument passed
 * Return: 0 on Success
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_fom file_to\n");
		exit(97);
	}

	cp_function(av[1], av[2]);
	return (0);
}

/**
 * cp_function - That copies text from one to the other
 * @file1: Copy From
 * @file2: Copy to
 * Return: Nothing
 */

void cp_function(const char *file1, const char *file2)
{
	int fd1, fd2;
	ssize_t bytes_read = 0, bytes_written = 0;
	size_t char_printed = 0;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int file_exists = access(file2, F_OK) != -1;

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Cant't read from file %s\n", file1);
		exit(98);
	}

	fd2 = open(file2, O_WRONLY
			| O_CREAT
			| (file_exists ? 0 : O_TRUNC)
			| permissions);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	while ((bytes_read = read(fd1, buffer, (sizeof(buffer)) - 1)) > 0)
	{
		if (bytes_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", file1);
			exit(98);
		}

		if (bytes_read == 0)
			break;
		char_printed += bytes_read;
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}

	}
	close(fd1);
	close(fd2);
}
