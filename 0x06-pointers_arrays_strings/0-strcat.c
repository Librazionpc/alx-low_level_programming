#include <stdio.h>
#include "main.h"
/**
 * _strcat - A function that concatenate two strings
 *
 * @dest: Fetches the argument from the main.c
 * @src: Fetches the argumnet from the main.c
 */
char *_strcat(char *dest, char *src)
{
	char cat[50];
	int a, b = 0;
	char *pt;

	for (a = 0; dest[a] != '\0'; a++)
	{
		cat[b] = dest[a];
		b++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		cat[b] = src[a];
		b++;
	}
	cat[b] = '\0';
	pt = cat;
return (pt);
}
