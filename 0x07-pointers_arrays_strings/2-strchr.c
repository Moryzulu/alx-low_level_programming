#include "main.h"
/**
 * _strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'  ; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}

	return ('\0');
}
