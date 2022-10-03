#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
	char example[100];

	strcpy (example, "TechOnTheNet.com ");
	strncat (example, "is over 10 years old.", 21);

	printf("%s\n", example);

	return 0;
}
