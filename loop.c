#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=2;
  
  while(i<256)
    printf("%d\n",i=square(i));
    return(EXIT_SUCCESS);
 }
int square(int x)
{
  return (x*x);
}
