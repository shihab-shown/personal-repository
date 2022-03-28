#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n+1];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int a,pos;
  printf("Insert the number and position");
  scanf("%d %d",&a, &pos);
  for(int i=0; i<n; i++)
  {
    if((pos-1)==i)
    {
      for(int j=n; j>i; j--)
      {
        arr[j]=arr[j-1];
      }
      arr[i]=a;
    }
  }
  for(int i=0; i<n+1; i++)
  {
    printf("%d  ",arr[i]);
  }
  return 0;
}