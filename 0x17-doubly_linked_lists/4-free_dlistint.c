#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
