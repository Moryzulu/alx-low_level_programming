#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * main - Prints its name
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int c = a * b;

	(void) argc;
	printf("%d\n", c);
	return (0);
}
