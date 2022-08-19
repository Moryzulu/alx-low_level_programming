#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: ...
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = ((n >> index) & 1);
	if (index > 100)
		return (-1);
	return (i);
}


