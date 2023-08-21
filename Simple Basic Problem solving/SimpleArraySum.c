#include <stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  int arr[t],sum=0;
  for(int i=0; i<t; i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0; i<t; i++)
  {
    sum+=arr[i];
  }
  printf("%d",sum);
  return 0;
}