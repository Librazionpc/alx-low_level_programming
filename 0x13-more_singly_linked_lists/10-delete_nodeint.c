#include "lists.h"

/**
 *
 *
 *
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *save, *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	save = *head;
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	for (i = 0; i < index && save != NULL; i++)
	{
		current = save;
		save = save->next;
	}
	current->next = save->next;
	free(save);
	save = NULL;
	return (1);
}
