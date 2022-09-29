#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int temp2 = 0;

	if (head)
	{
		while (temp != NULL)
		{
			if (temp2 == index)
				return (temp);

			temp = temp->next;
			++temp2;
		}
	}

	return (NULL);
}
