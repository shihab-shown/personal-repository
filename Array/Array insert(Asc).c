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
  printf("Insert the number");
  int a;
  scanf("%d",&a);
  for(int i=0; i<n; i++)
  {
    if(a>arr[i])
    {
      for(int j=n; j>i+1; j--)
      {
        arr[j]=arr[j-1];
      }
      arr[i+1]=a;
    }
  }
  for(int i=0; i<n+1; i++)
  {
    printf("%d  ",arr[i]);
  }
  return 0;
}