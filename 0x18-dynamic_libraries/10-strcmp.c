#include <string.h>
#include <stdio.h>
/**
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	if (s1 == s2)
	{
		return(0);
	}
	else if (s1 < s2)
	{
		return(n < 0);
	}
	else 
	{
		return (n > 0);
	}	
}
