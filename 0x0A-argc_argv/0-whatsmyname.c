#include <stdio.h>

/**
 * main - Function that print the argument on the command line
 *
 * @argc: Fetches the lenght of the string
 * @argv: Fetches the name of the argument
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s", argv[0]);
	return (0);
}
