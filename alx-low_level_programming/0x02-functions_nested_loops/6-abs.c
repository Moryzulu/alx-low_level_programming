#include "main.h"
/**
 * _abs- prints absolute value
 * @b: argument passed for printig absolute value
 * Return: obsalute number or 0
 */
int _abs(int b)
{
	if (b < 0)
	{
		int abs_val;

		abs_val = b * -1;
		return (abs_val);
	}

	return (b);
}
