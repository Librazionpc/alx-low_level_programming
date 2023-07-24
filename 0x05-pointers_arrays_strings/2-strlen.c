#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - Function that returns the length of a string.
 *
 * @s: Fetches the arguments from the main.c
 * Return: The lenght of the string.
 */
int _strlen(char *s)
{
	int lenght;
	const char *string;

	string = s;
	lenght = strlen(string);
	return (lenght);
}
