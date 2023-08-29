#include "lists.h"

/**
 * get_nodeint_at_index - Function that the nth index of a linked list
 * @head: The NULL linked list
 * @index: The index to be worked on
 *
 * Return: The node at that the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *save;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	save = head;

	for (i = 0; i < index; i++)
	{
		save = save->next;
	}
	return (save);
}
