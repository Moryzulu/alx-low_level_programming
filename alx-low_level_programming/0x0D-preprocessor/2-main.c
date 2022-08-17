#include<stdio.h>
/**
  * print_filename - Prints the file name of the program
  *
  * Return: Always zero
  */
void print_filename(void)
{
	printf("%s\n", __FILE__);
}
/**
  * main - Prints the file name of the program
  *
  * Return: Always zero
  */
int main(void)
{
	print_filename();
	return (0);
}
