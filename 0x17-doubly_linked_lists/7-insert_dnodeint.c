#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a nonde at particlar index
 * @h: The head pointer of the node
 * @idx: The node to inserted
 * @n: The data to be placed
 * Return: The newly added node amongst the old ones
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_dlist, *state, *save;
	unsigned int i = 0;

	if (h == NULL || *h == NULL)
		return (NULL);

	temp = *h;

	while (temp != NULL && i < idx)
	{
		i++;
		save = temp;
		temp = temp->next;
	}
	if (i >= idx)
		return (NULL);
	if (i == 0)
	{
		state = add_dnodeint(h, n);
		return (state);
	}
	else if (i == (idx - 1))
	{
		state = add_dnodeint_end(h, n);
		return (state);
	}
	else
	{
		new_dlist = malloc(sizeof(dlistint_t));
		if (new_dlist == NULL)
			return (NULL);
		new_dlist->n = n;
		new_dlist->prev = save;
		new_dlist->next = temp;
		if (save != NULL)
			save->next = new_dlist;
		if (temp != NULL)
			temp->prev = new_dlist;
	}
	return (new_dlist);
}
