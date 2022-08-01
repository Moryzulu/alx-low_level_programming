#include<stdio.h>
void print_filename()
{
	printf("%s\n", __FILE__);
}
int main()
{
	print_filename();
	return (0);
}
