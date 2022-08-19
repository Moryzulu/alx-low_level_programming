#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i = 0, j = 1;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] - 48 > 1)
			return (0);
		i++;
	}
	i--;
	n = 0;
	do {
		n += (b[i] - '0') * j;
		j *= 2;
	} while (i--);

	return (n);


}
