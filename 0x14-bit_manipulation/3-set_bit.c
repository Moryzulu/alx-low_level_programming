#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * set_bit - Sets the value of a bit to 1 at a given index
  * @n: The number to modify
  * @index: The index in the number to modify
  *
  * Return: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)

		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);

}
