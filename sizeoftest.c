#include <stdio.h>
struct something
{
  short a;	
  char  b;
  short c;
  int   d; 
  char  e; 
}number;
int main()
{
   	printf("%d\n",sizeof(number));
}
