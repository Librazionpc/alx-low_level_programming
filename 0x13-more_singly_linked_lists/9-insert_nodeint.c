#include "lists.h"

/**
 * insert_nodeint_at_index - Funtion that add node to a linked list
 * @head: The linked list to be worked on
 * @idx: The index to where the newNode is to be placed
 * @n: The element of the newNode
 *
 * Return: The newNode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *save, *temp, *newNode;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	save = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (0);

	newNode->n = n;

	for (i = 0; i < idx && save != NULL; i++)
	{
		temp = save;
		save = save->next;
	}
	if (save->next == NULL && i == idx)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = save;
	temp->next = newNode;

	return (newNode);
}
