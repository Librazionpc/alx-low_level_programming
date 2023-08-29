#include "lists.h"

/**
 *
 *
 *
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *save, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	save = *head;
	if (index != 0)
	{
		for (i = 0; i < index && save != NULL; i++)
		{
			previous = save;
			save = save->next;
		}
	}
	previous = save->next;
	free(save);
	save = NULL;
	return (1);
}
