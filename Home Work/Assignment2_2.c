#include <stdio.h>

  int main()
{
  int n,factorial=1;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  if(n!=0)
  {
    for (int i=1; i<=n; i++)
    {
      factorial*=i;
    }
    printf("The factorial of %d is %d",n,factorial);
  }
  else
  {
    printf("The factorial of %d is 1",n);
  } 
  return 0;
}