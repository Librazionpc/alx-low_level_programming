#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Funtion that print from a linked list
 *
 * @h: Fetches the linked list
 *
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	int i, count = 1;

	for (i = 0; h->next != NULL; i++)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		printf("[%d] %s\n", h->len, h->str);
	}
	return (count);
}
