#include <stdio.h>
int main()
{
  int x,n,factorial=1,c=1;
  float sum=1.0;
  printf("Enter the value of x: ");
  scanf("%d",&x);
  printf("Enter the value of n: ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
  {
    factorial*=i;
    c=c*x;
    sum=sum+(c*1.0/factorial);
  }
  printf("Sum is %.2f",sum);
  return 0;
}