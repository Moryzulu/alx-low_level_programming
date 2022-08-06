#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - the number of arguments passed into it.
 * @argc : int
 * @argv : string
 *
 * Return: 0 for success
*/
int main(int argc, char *argv[])
{
	int a = 0;
	int i;
	int b;
	int ch[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (b / ch[i] > 0)
		{
			if (b % ch[i] == 0)
			{
				a = a + b / ch[i];
				printf("%d\n", a);
				return (0);
			}
			else
			{
				a = a + b / ch[i];
				b = b % ch[i];
			}
		}
	}
	printf("%d\n", a);
	return (0);
}
