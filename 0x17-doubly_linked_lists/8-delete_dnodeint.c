#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: The first element of the list.
 * @index: The position of the node to delete.
 * Return: 1 if failure. -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = *head;
	while ((temp->next != NULL) && (i < index))
	{
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		if (temp->prev)
			temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
