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
    printf("%d\n",factorial);
  }
  return 0;
}