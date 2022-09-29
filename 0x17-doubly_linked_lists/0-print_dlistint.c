#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function to print data of a list
 * @h: argument for nodes
 *
 * Return: length of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		++len;
	}
	return (len);
}

