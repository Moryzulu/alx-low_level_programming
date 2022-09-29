#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a  new node at a given position.
 * @head: The first element of the list.
 * @idx: The position of insertion.
 * @n: The data of the new node.
 *
 * Return: The address of the new node if success.
 *	   NULL otherwise.
 */
dlistint_t *insert_dnodeint_at_index(
		dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *temp, *my_node;
	unsigned int j = 0;

	my_node = malloc(sizeof(dlistint_t));
	if (my_node)
	{
		my_node->n = n;
		if (idx == 0 || head == NULL)
		{
			add_dnodeint(head, n);
		}
		else
		{
			temp = *head;
			while ((temp != NULL) && (j + 1 < idx))
			{
				temp = temp->next;
				j++;
			}
			if (j + 1  == idx)
			{
				if (temp == NULL)
				{
					add_dnodeint_end(head, n);
				}
				else
				{
					my_node->prev = temp;
					my_node->next = temp->next;
					temp->next = my_node;
					(my_node->next)->prev = my_node;
				}
			}
		}
	}
	return (my_node);
}
