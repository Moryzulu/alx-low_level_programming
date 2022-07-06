#include "main.h"

/**
 * _isalpha - int c to chech alphabet charactor
 *
 * Return: 1 for alphabetic character or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
