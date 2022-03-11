#include <stdio.h>

int main()
{
  int a,x,tmp=1;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  printf("Enter the value of x: ");
  scanf("%d",&x);
  for(int i=0; i<x; i++)
  {
    tmp=tmp*a;
  }
  printf("%d",tmp);
return 0;
}