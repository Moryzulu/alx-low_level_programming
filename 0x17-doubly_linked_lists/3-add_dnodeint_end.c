#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end
  * of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_nod = NULL;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		new_nod->next = NULL;
		new_nod->prev = temp;
		temp->next = new_nod;
		return (new_nod);
	}

	new_nod->next = *head;
	new_nod->prev = NULL;
	*head = new_nod;
	return (*head);
}
