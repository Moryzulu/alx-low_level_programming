#include <stdio.h>
#include "main.h"


void int2bin(unsigned integer, int n=8)
{  
  for (int i=0;i<n;i++)   
    putchar ( (integer & (int)1<<(n-i-1)) ? '1' : '0' );
}
